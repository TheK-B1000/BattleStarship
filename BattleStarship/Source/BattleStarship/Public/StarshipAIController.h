// K-B Enterprises

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "Starship.h"
#include "StarshipAIController.generated.h"

/**
 * 
 */
UCLASS()
class BATTLESTARSHIP_API AStarshipAIController : public AAIController
{
	GENERATED_BODY()
	
public: 
	AStarship* GetEnemyStarship() const;

	void virtual BeginPlay() override;
};
