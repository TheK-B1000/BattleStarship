// K-B Enterprises

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "Engine/World.h"
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
	void virtual BeginPlay() override;

private:
	AStarship* GetEnemyStarship() const;

	AStarship* GetPlayerStarship() const;


};
