// Copyright C 2017 Tomasz Figas

#pragma once

#include "Components/ActorComponent.h"
#include "TankAimingComponent.generated.h"


// Forward declaration
class UTankBarrel; 

// Holds barrel's parameters and Elavate method
UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class BATTLETANK_API UTankAimingComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UTankAimingComponent();

	void SetBarrelReference(UTankBarrel* BarrelToSet);

	// TODO add SetTurretReference

	void AimAt(FVector HitLocation, float LaunchSpeed);

private:

	UTankBarrel* Barrel = nullptr;

	void MoveBarrelTowards(FVector AimDirection);

	
};
