// K-B Enterprises

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Starship.generated.h"

UCLASS()
class BATTLESTARSHIP_API AStarship : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	AStarship();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
