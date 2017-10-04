// Copyright C 2017 Tomasz Figas

#pragma once
#include "AIController.h"
#include "TankAIController.generated.h"

// Forward declaration
class ATank;

UCLASS()
class BATTLETANK_API ATankAIController : public AAIController
{
	GENERATED_BODY()
	
private:	
	virtual void BeginPlay() override;

	virtual void Tick(float DeltaSeconds) override;

	ATank* GetControlledTank() const;

	ATank* GetPlayerTank() const;
	
};
