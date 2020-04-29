// K-B Enterprises

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Kismet/GameplayStatics.h"
#include "StarshipAimingComponent.generated.h"

 // Forward declaration
class UStarshipCannon;
class UStarshipTurret;

// Holds Cannon's properties and Elevate method
UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class BATTLESTARSHIP_API UStarshipAimingComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UStarshipAimingComponent();

public:	
	void AimAt(FVector HitLocation, float LaunchSpeed);

	void SetCannonReference(UStarshipCannon* CannonToSet);

	void SetTurretReference(UStarshipTurret* TurretToSet);

private:
	UStarshipCannon* Cannon = nullptr;

	UStarshipTurret* Turret = nullptr;

	void MoveCannonTowards(FVector AimDirection);

};
