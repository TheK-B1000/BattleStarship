// K-B Enterprises

#include "Starship.h"
#include "StarshipAIController.h"
#include "Engine/World.h"
#include "GameFramework/PlayerController.h"


void AStarshipAIController::BeginPlay()
{
	Super::BeginPlay();

	auto Player = GetPlayerStarship();

	if (!Player)
	{
		UE_LOG(LogTemp, Warning, TEXT("AI Controller cannot find the Player!"));
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("AI Controller found player: %s!"), *(Player->GetName()));
	}

}
	AStarship* AStarshipAIController::GetEnemyStarship() const
	{
		return Cast<AStarship>(GetPawn());
	}

	AStarship* AStarshipAIController::GetPlayerStarship() const
	{
		auto PlayerController = GetWorld()->GetFirstPlayerController();
		if (!PlayerController) { return nullptr; }
		return Cast<AStarship>(PlayerController);
	}

