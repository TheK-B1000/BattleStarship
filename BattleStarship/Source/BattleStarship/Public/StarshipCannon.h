// K-B Enterprises

#pragma once

#include "CoreMinimal.h"
#include "Components/StaticMeshComponent.h"
#include "StarshipCannon.generated.h"

/**
 * 
 */
UCLASS(meta = (BlueprintSpawnableComponent), hidecategories = ("Collision"))
class BATTLESTARSHIP_API UStarshipCannon : public UStaticMeshComponent
{
	GENERATED_BODY()
	
public:
	void Elevate(float DegreesPerSecond);

private: 
	UPROPERTY(EditAnywhere, Category = Setup)
	float MaxDegreesPerSeconds = 20; // Sensible Default

	UPROPERTY(EditAnywhere, Category = Setup)
	float MaxElevationInDegrees = 40; // Sensible Default

	UPROPERTY(EditAnywhere, Category = Setup)
	float MinElevationInDegrees = 0; // Sensible Default

};
