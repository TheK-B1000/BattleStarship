// K-B Enterprises

#include "Starship.h"
#include "StarshipAIController.h"
#include "Engine/World.h"
#include "GameFramework/PlayerController.h"


void AStarshipAIController::BeginPlay()
{
	Super::BeginPlay();

	auto ControlledStarship = GetControlledStarship();

	if (!ControlledStarship)
	{
		UE_LOG(LogTemp, Warning, TEXT("AI Controller cannot find the Player!"));
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("AI Controller found player: %s!"), *(ControlledStarship->GetName()));
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

