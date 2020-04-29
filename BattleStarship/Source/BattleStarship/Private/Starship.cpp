// Social Cube Media 2020

#include "Starship.h"
#include "StarshipAimingComponent.h"
#include "UObject/UObjectGlobals.h"

// Sets default values
AStarship::AStarship() // Constructor 
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	StarshipAimingComponent = CreateDefaultSubobject<UStarshipAimingComponent>(FName(" Aiming Component "));

}

void AStarship::SetCannonReference(UStarshipCannon* CannonToSet)
{
	StarshipAimingComponent->SetCannonReference(CannonToSet);
}

void AStarship::SetTurretReference(UStarshipTurret* TurretToSet)
{
	StarshipAimingComponent->SetTurretReference(TurretToSet);
}

// Called when the game starts or when spawned
void AStarship::BeginPlay()
{
	Super::BeginPlay();
}

// Called to bind functionality to input
void AStarship::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	InputComponent->BindAction("Fire", IE_Pressed, this, &AStarship::Fire);
}

void AStarship::AimAt(FVector HitLocation)
{
	StarshipAimingComponent->AimAt(HitLocation, LaunchSpeed);
} 

void AStarship::Fire()
{
	UE_LOG(LogTemp, Warning, TEXT("Starship is Firing!"));
}