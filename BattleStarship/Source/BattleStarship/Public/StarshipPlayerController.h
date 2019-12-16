// K-B Enterprises
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

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Start the Starship moving the gun turrets so that the shot would be where 
	// the crosshair intersects the world
	void AimTowardsCrosshair();

private:
	bool GetSightRayHitLocation(FVector& OutHitLocation) const; // return an OUT parameter, true if hit landscape
};
