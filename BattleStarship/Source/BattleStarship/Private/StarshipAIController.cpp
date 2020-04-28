// K-B Enterprises

#include "Starship.h"
#include "StarshipAIController.h"
#include "Engine/World.h"
#include "GameFramework/PlayerController.h"


	void AStarshipAIController::BeginPlay()
	{
		Super::BeginPlay();
		FindPlayerStarship();
	}
	void AStarshipAIController::Tick(float DeltaTime)
	{
		// Called every frame
		Super::Tick(DeltaTime);
		if (GetPlayerStarship())
		{
			// TODO move to player

			// AimAt Player Starship
			//GetControlledStarship()->AimAt(GetPlayerStarship()->GetActorLocation(), DeltaTime);

			// Fire when ready
		}
	}

	AStarship* AStarshipAIController::GetControlledStarship() const
	{
		return Cast<AStarship>(GetPawn());
	}

	AStarship* AStarshipAIController::GetPlayerStarship() const
	{
		auto PlayerController = GetWorld()->GetFirstPlayerController();
		if (!PlayerController) { return nullptr; }
		return Cast<AStarship>(PlayerController);
	}

	AStarship* AStarshipAIController::FindPlayerStarship() const
	{
		auto PlayerStarship = GetPlayerStarship();

		if (!PlayerStarship)
		{
			UE_LOG(LogTemp, Warning, TEXT("AI Controller cannot find Player Starship!"));
		}
		else
		{
			UE_LOG(LogTemp, Warning, TEXT("AI Controller found player: %s!"), *(PlayerStarship->GetName()));
		}
		return PlayerStarship;
	}
