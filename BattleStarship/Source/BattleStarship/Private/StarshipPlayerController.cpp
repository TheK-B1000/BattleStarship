// K-B Enterprises

#include "Starship.h"
#include "StarshipPlayerController.h"

void AStarshipPlayerController::BeginPlay()
{
	Super::BeginPlay();
	UE_LOG(LogTemp, Warning, TEXT("PlayerController BeginPlay"));

	auto ControlledStarship = GetControlledStarship();

	if (!ControlledStarship)
	{
		UE_LOG(LogTemp, Warning, TEXT("The Starship is NOT possessed!"));
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("PlayerController is possessed by: %s"), *(ControlledStarship->GetName()));
	}
}

AStarship* AStarshipPlayerController::GetControlledStarship() const
{
	return Cast<AStarship>(GetPawn());
}

