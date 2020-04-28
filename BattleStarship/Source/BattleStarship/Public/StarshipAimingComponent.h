// K-B Enterprises

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Kismet/GameplayStatics.h"
#include "StarshipAimingComponent.generated.h"

class UStarshipCannon; // Forward declaration

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class BATTLESTARSHIP_API UStarshipAimingComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UStarshipAimingComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	void AimAt(FVector HitLocation, float LaunchSpeed);

	// Create a setter
	void SetCannonReference(UStarshipCannon* CannonToSet);

	void MoveCannonTowards(FVector AimDirection);

private:
	UStarshipCannon* Cannon = nullptr;

	float LaserSpeed = 1000;
};
