// K-B Enterprises

#include "StarshipPlayerController.h"
#include "Starship.h"
#include "Engine/World.h"

void AStarshipPlayerController::BeginPlay()
{
	Super::BeginPlay();
	FindControlledStarship();
}

void AStarshipPlayerController::FindControlledStarship()
{
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
	if (GetSightRayHitLocation(HitLocation))  // has "side-effect", is going to line trace
	{
		GetControlledStarship()->AimAt(HitLocation);
	}
}

bool AStarshipPlayerController::GetSightRayHitLocation(FVector& HitLocation) const // GetSightRayHitLocation
{
	// Find the crosshair position
	FVector LookDirection;
	int32 ViewportSizeX, ViewportSizeY;
	GetViewportSize(ViewportSizeX, ViewportSizeY);
	auto ScreenLocation = FVector2D
	(
		OUT ViewportSizeX * CrossHairXLocation,
		OUT ViewportSizeY * CrossHairYLocation
	);
	if (GetLookDirection(ScreenLocation, LookDirection))
	{
		// Line-trace along that look direction, and see what we hit (up to maximum range)
		GetLookVectorHitLocation(LookDirection, HitLocation);
	}

	return true;
}

bool AStarshipPlayerController::GetLookVectorHitLocation(FVector& HitLocation, FVector& LookDirection) const
{
	FHitResult HitResult;
	auto StartLocation = PlayerCameraManager->GetCameraLocation();
	auto EndLocation = StartLocation + (LookDirection * LineTraceRange);
	if (GetWorld()->LineTraceSingleByChannel(
		HitResult,
		StartLocation,
		EndLocation,
		ECollisionChannel::ECC_Visibility)
		)
	{
		HitLocation = HitResult.Location;
		return true;
	}
	HitLocation = FVector(0);
	return false; // If line trace fails
}

bool AStarshipPlayerController::GetLookDirection(FVector2D& ScreenLocation, FVector& LookDirection) const
{
	FVector WorldCameraLocation; // To be discarded
	// "de-project" the screen position of the crosshair to the world direction
	return DeprojectScreenPositionToWorld
	(
		ScreenLocation.X,
		ScreenLocation.Y,
		WorldCameraLocation,
		LookDirection
	);
}

