// K-B Enterprises

#include "Starship.h"
#include "StarshipCannon.h"
#include "StarshipAimingComponent.h"

// Sets default values for this component's properties
UStarshipAimingComponent::UStarshipAimingComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;
}


void UStarshipAimingComponent::SetCannonReference(UStarshipCannon* CannonToSet)
{
	Cannon = CannonToSet;
}

// Called when the game starts
void UStarshipAimingComponent::BeginPlay()
{
	Super::BeginPlay();
	
}

 void UStarshipAimingComponent::AimAt(FVector HitLocation, float LaunchSpeed)
{
	 if (!Cannon) { return; } // Pointer Protection

	FVector StartLocation = Cannon->GetSocketLocation(FName("CannonHead"));
	FVector OutLaunchVelocity(0); // OUT parameter
		
	// Calculate Launch Velocity
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

	if (bHaveAimSolution)
	{
		auto AimDirection = OutLaunchVelocity.GetSafeNormal(); // Unit Vector
		auto TankName = GetOwner()->GetName();
		MoveCannonTowards(AimDirection);
	}
} 

 void UStarshipAimingComponent::MoveCannonTowards(FVector AimDirection)
 {

	 // Work-out difference between current cannon rotation with and AimDirection
	 auto CannonRotator = GetOwner()->GetActorForwardVector();
	 auto AimAtRotator = AimDirection.Rotation();

	 Cannon->Elevate(1); // TODO remove magic number
 }