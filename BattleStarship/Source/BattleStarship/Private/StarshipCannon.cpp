// K-B Enterprises

#include "StarshipCannon.h"

void UStarshipCannon::Elevate(float RelativeSpeed)
{
	RelativeSpeed = FMath::Clamp<float>(RelativeSpeed, -1, +1);
	auto ElevationChange = RelativeSpeed * MaxDegreesPerSeconds * GetWorld()->DeltaTimeSeconds;
	auto RawNewElevation = GetRelativeRotation().Pitch + ElevationChange;
	auto Elevation = FMath::Clamp(RawNewElevation, MinElevationInDegrees, MaxElevationInDegrees);
	SetRelativeRotation(FRotator(0, Elevation, 0));
}