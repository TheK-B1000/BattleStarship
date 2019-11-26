// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Starship.h"
#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "StarshipPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class BATTLESTARSHIP_API AStarshipPlayerController : public APlayerController
{
	GENERATED_BODY()
	
public:
	AStarship* GetControlledStarship() const;

	virtual void BeginPlay() override;

};
