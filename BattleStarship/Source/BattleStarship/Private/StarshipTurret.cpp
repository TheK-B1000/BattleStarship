// K-B Enterprises


#include "StarshipTurret.h"

void UStarshipTurret::RotateToAim(float RelativeSpeed)
{
	RelativeSpeed = FMath::Clamp<float>(RelativeSpeed, -1, +1);
	auto RotationChange = RelativeSpeed * MaxDegreesPerSeconds * GetWorld()->DeltaTimeSeconds;
	auto Rotation = GetRelativeRotation().Yaw + RotationChange;
	SetRelativeRotation(FRotator(0, Rotation, 0));
}