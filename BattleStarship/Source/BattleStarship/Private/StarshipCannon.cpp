// K-B Enterprises

#include "StarshipCannon.h"

void UStarshipCannon::Elevate(float RelativeSpeed)
{
	// Move the cannon the right amount this frame

	// Given a max elevation speed, and the frame time
	auto ElevationChange = RelativeSpeed * MaxDegreesPerSeconds * GetWorld()->DeltaTimeSeconds;

	// unclamped new elevation
	auto RawNewElevation = RelativeRotation.Pitch + ElevationChange;
	UE_LOG(LogTemp, Warning, TEXT("Elevation change is: %f"), ElevationChange);

	auto ClampedElevation = FMath::Clamp(RawNewElevation, MinElevationInDegrees, MaxElevationInDegrees);

	SetRelativeRotation(FRotator(ClampedElevation, 0, 0));
}