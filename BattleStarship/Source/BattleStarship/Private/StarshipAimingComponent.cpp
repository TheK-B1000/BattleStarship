// K-B Enterprises

#include "StarshipAimingComponent.h"
#include "Starship.h"
#include "StarshipCannon.h"
#include "StarshipTurret.h"

// Sets default values for this component's properties
UStarshipAimingComponent::UStarshipAimingComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = false;
}

void UStarshipAimingComponent::SetCannonReference(UStarshipCannon* CannonToSet)
{
	if (!CannonToSet) { return;  }
	Cannon = CannonToSet;
}

void UStarshipAimingComponent::SetTurretReference(UStarshipTurret* TurretToSet)
{
	if (!TurretToSet) { return; }
	Turret = TurretToSet;
}

 void UStarshipAimingComponent::AimAt(FVector HitLocation, float LaunchSpeed)
{
	 if (!Cannon) { return; } // Pointer Protection

	FVector OutLaunchVelocity(0); // OUT parameter
	FVector StartLocation = Cannon->GetSocketLocation(FName("CannonHead"));
	bool bHaveAimSolution = UGameplayStatics::SuggestProjectileVelocity
	(
		this,
		OutLaunchVelocity,
		StartLocation,
		HitLocation,
		LaunchSpeed,
		false,
		0,
		0,
		ESuggestProjVelocityTraceOption::DoNotTrace
	);

} 

 void UStarshipAimingComponent::MoveCannonTowards(FVector AimDirection)
 {
	 // Work-out difference between current cannon roation, and AimDirection
	 auto CannonRotator = Cannon->GetForwardVector().Rotation();
	 auto AimAsRotator = AimDirection.Rotation();
	 auto DeltaRotator = AimAsRotator - CannonRotator;

	 Cannon->Elevate(DeltaRotator.Pitch);
	 Turret->RotateToAim(DeltaRotator.Yaw);
 }
