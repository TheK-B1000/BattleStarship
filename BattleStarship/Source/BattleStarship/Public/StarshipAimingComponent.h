// K-B Enterprises

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Components/StaticMeshComponent.h"
#include "StarshipAimingComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class BATTLESTARSHIP_API UStarshipAimingComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UStarshipAimingComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
		
	void AimAt(FVector HitLocation);

	// Create a setter
	void SetCannonReference(UStaticMeshComponent* CannonToSet);

private:
	UStaticMeshComponent* Cannon = nullptr;
};
