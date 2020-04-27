// K-B Enterprises

#pragma once

#include "StarshipAimingComponent.h"
#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Starship.generated.h"

UCLASS()
class BATTLESTARSHIP_API AStarship : public APawn
{
	GENERATED_BODY()

public:
	void AimAt(FVector HitLocation);

	UFUNCTION(BlueprintCallable, Category = Setup)
	void SetCannonReference(UStaticMeshComponent* CannonToSet);

protected:
	UStarshipAimingComponent* StarshipAimingComponent = nullptr;

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
