// K-B Enterprises

#include "Starship.h"
#include "StarshipPlayerController.h"
#include "Engine/World.h"


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

void AStarshipPlayerController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	AimTowardsCrosshair();
}

AStarship* AStarshipPlayerController::GetControlledStarship() const
{
	return Cast<AStarship>(GetPawn());
}

void AStarshipPlayerController::AimTowardsCrosshair()
{
	if (!GetControlledStarship()) { return; }
	FVector HitLocation; // OUT Parameter
	if (GetSightRayHitLocation(HitLocation)) // has "side-effect", is going to line trace
	{
		UE_LOG(LogTemp, Warning, TEXT("Look direction: %s"), *(HitLocation.ToString()));
		// TODO tell controlled starship to aim at this point
	}
}

// Get World Location if linetrace through crosshair, true if hits land
bool AStarshipPlayerController::GetSightRayHitLocation(FVector& HitLocation) const // GetSightRayHitLocation
{
	// Find the crosshair position
	// "de-project" the screen position of the crosshair to the world direction
	// Line-trace along that look direction, and swee what we hit (up to maximum range)
	int32 ViewportSizeX, ViewportSizeY;
	GetViewportSize(ViewportSizeX, ViewportSizeY);
	return false;
}

