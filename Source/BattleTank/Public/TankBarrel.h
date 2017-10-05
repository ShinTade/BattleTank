// Copyright C 2017 Tomasz Figas

#pragma once

#include "Components/StaticMeshComponent.h"
#include "TankBarrel.generated.h"

/**
 * 
 */
UCLASS(ClassGroup = (Custom), meta=(BlueprintSpawnableComponent), hidecategories = ("Collision"))
class BATTLETANK_API UTankBarrel : public UStaticMeshComponent
{
	GENERATED_BODY()
	
public:
	// -1 is max downward movement, and +1 is max up movement
	void Elevate(float RelativeSpeed);
	
private:
	UPROPERTY(EditAnywhere, Category = Setup)
	float MaxDegreesPerSecond = 15.f;

	UPROPERTY(EditAnywhere, Category = Setup)
	float MaxElevationDegrees = 50.f;

	UPROPERTY(EditAnywhere, Category = Setup)
	float MinElevationDegrees = -10.f;
	
};
