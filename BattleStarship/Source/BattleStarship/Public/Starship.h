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
	void AimAt(FVector HitLocation);

private:
	// Sets default values for this pawn's properties
	AStarship();

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
