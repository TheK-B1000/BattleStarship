// K-B Enterprises

#include "Starship.h"
#include "StarshipPlayerController.h"
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

// Get World Location if linetrace through crosshair, true if hits land
bool AStarshipPlayerController::GetSightRayHitLocation(FVector& HitLocation) const // GetSightRayHitLocation
{
	// Find the crosshair position
	FVector LookDirection;
	int32 ViewportSizeX, ViewportSizeY;
	GetViewportSize(ViewportSizeX, ViewportSizeY);
	auto ScreenLocation = FVector2D
	(
		OUT CrossHairXLocation * ViewportSizeX,
		OUT CrossHairYLocation * ViewportSizeY
	);
	if (GetLookDirection(ScreenLocation, LookDirection))
	{
		// Line-trace along that look direction, and see what we hit (up to maximum range)
		GetLookVectorHitLocation(HitLocation, LookDirection);
	}

	return true;
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

bool AStarshipPlayerController::GetLookVectorHitLocation(FVector& HitLocation, FVector& LookDirection) const
{
	// calculate ray start point, ray end point, hit result, collision parameters
	// ray start point is the camera location
	// ray end point is a ray cast through the middle of the screen
	FHitResult HitResult;
	auto TraceStartPoint = PlayerCameraManager->GetCameraLocation();
	auto TraceEndPoint = TraceStartPoint + (LookDirection * LineTraceRange);
	if (GetWorld()->LineTraceSingleByChannel(
		HitResult,
		TraceStartPoint,
		TraceEndPoint,
		ECollisionChannel::ECC_Visibility)
		)
	{
		HitLocation = HitResult.Location;
		return true;
	}
	HitLocation = FVector(0);
	return false; // If line trace fails
}
