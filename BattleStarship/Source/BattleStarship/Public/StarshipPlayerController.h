// K-B Enterprises
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "StarshipPlayerController.generated.h"

// Forward decelaration
class AStarship;

UCLASS()
class BATTLESTARSHIP_API AStarshipPlayerController : public APlayerController
{
	GENERATED_BODY()
	
public:
	AStarship* GetControlledStarship() const;

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	void FindControlledStarship();

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Start the Starship moving the gun turrets so that the shot would be where 
	// the crosshair intersects the world
	void AimTowardsCrosshair();

private:
	bool GetSightRayHitLocation(FVector& OutHitLocation) const; // return an OUT parameter, true if hit landscape

	bool GetLookDirection(FVector2D& ScreenLocation, FVector& LookDirection) const;

	bool GetLookVectorHitLocation(FVector& HitLocation, FVector& LookDirection) const;

	UPROPERTY(EditAnywhere)
	float CrossHairXLocation = 0.5;

	UPROPERTY(EditAnywhere)
	float CrossHairYLocation = 0.33333;

	UPROPERTY(EditAnywhere)
	float LineTraceRange = 1000000;

	FVector* WorldLocation;

	FVector* WorldDirection;

};
