// K-B Enterprises

#pragma once

#include "CoreMinimal.h"
#include "Components/StaticMeshComponent.h"
#include "StarshipCannon.generated.h"

/**
 * 
 */
UCLASS()
class BATTLESTARSHIP_API UStarshipCannon : public UStaticMeshComponent
{
	GENERATED_BODY()
	
public:
	void Elevate(float DegreesPerSecond);

private: 
};
