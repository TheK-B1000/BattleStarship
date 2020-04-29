// K-B Enterprises

#pragma once

#include "CoreMinimal.h"
#include "Components/StaticMeshComponent.h"
#include "StarshipTurret.generated.h"

/**
 * 
 */
UCLASS(meta = (BlueprintSpawnableComponent))
class BATTLESTARSHIP_API UStarshipTurret : public UStaticMeshComponent
{
	GENERATED_BODY()
	
public:
	void RotateToAim(float RelativeSpeed);

private:
	UPROPERTY(EditAnywhere, Category = Setup)
	float MaxDegreesPerSeconds = 15;
};
