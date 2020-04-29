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
	// -1 is a max downward speed, +1 is a max up movement
	void Elevate(float RelativeSpeed);

private: 
	UPROPERTY(EditAnywhere, Category = Setup)
	float MaxDegreesPerSeconds = 10; // Sensible Default

	UPROPERTY(EditAnywhere, Category = Setup)
	float MaxElevationInDegrees = 40; // Sensible Default

	UPROPERTY(EditAnywhere, Category = Setup)
	float MinElevationInDegrees = 0; // Sensible Default

};
