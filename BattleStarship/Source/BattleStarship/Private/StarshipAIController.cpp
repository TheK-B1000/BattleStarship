// K-B Enterprises

#include "Starship.h"
#include "StarshipAIController.h"

void AStarshipAIController::BeginPlay()
{
	Super::BeginPlay();

	auto Enemy = GetEnemyStarship();

	if (!Enemy)
	{
		UE_LOG(LogTemp, Warning, TEXT("The Enemy Starships are NOT possessed!"));
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("AI Controller is possessed by: %s!"), *(Enemy->GetName()));
	}
}
	AStarship* AStarshipAIController::GetEnemyStarship() const
	{
		return Cast<AStarship>(GetPawn());
	}

