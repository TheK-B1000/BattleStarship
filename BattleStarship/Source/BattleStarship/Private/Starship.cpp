// Social Cube Media 2020

#include "Starship.h"
#include "UObject/UObjectGlobals.h"

void AStarship::SetCannonReference(UStarshipCannon* CannonToSet)
{
	StarshipAimingComponent->SetCannonReference(CannonToSet);
}

// Sets default values
AStarship::AStarship() // Constructor 
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	StarshipAimingComponent = CreateDefaultSubobject<UStarshipAimingComponent>(FName(" Aiming Component "));

}

// Called when the game starts or when spawned
void AStarship::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AStarship::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AStarship::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void AStarship::AimAt(FVector HitLocation)
{
	StarshipAimingComponent->AimAt(HitLocation, LaunchSpeed);
} 
