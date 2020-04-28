// K-B Enterprises

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Starship.generated.h"

// Forward Declaration
class UStarshipCannon; 
class UStarshipAimingComponent;

UCLASS()
class BATTLESTARSHIP_API AStarship : public APawn
{
	GENERATED_BODY()

public:
	void AimAt(FVector HitLocation);

	UFUNCTION(BlueprintCallable, Category = Setup)
	void SetCannonReference(UStarshipCannon* CannonToSet);

	UPROPERTY(EditAnywhere, Category = Firing)
	float LaunchSpeed = 100000; //  TODO find sensible default

protected:
	UStarshipAimingComponent* StarshipAimingComponent = nullptr;

private:
	// Sets default values for this pawn's properties
	AStarship();

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
