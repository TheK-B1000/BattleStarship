// K-B Enterprises

#include "Starship.h"
#include "StarshipAimingComponent.h"

// Sets default values for this component's properties
UStarshipAimingComponent::UStarshipAimingComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;
}


void UStarshipAimingComponent::SetCannonReference(UStaticMeshComponent* CannonToSet)
{
	Cannon = CannonToSet;
}

// Called when the game starts
void UStarshipAimingComponent::BeginPlay()
{
	Super::BeginPlay();
	
}


// Called every frame
void UStarshipAimingComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
}

 void UStarshipAimingComponent::AimAt(FVector HitLocation, float LaunchSpeed)
{
	 if (!Cannon) { return; } // Pointer Protection

	FVector StartLocation = Cannon->GetSocketLocation(FName("CannonHead"));
	FVector OutLaunchVelocity(0); // OUT parameter
	auto Trace = ESuggestProjVelocityTraceOption::DoNotTrace;
	auto ResponseParam = FCollisionResponseParams::DefaultResponseParam;
		
	// Calculate Launch Velocity
	if (UGameplayStatics::SuggestProjectileVelocity
	(
		this,
		OutLaunchVelocity,
		StartLocation,
		HitLocation,
		LaserSpeed,
		Trace,
		ResponseParam
	)
		)
	{
		auto AimDirection = OutLaunchVelocity.GetSafeNormal(); // Unit Vector
		auto TankName = GetOwner()->GetName();
		UE_LOG(LogTemp, Warning, TEXT("%s is aiming at %s!"), *TankName, *AimDirection.ToString());
	}
		// if no solution found do nothing	
} 
