// Copyright C 2017 Tomasz Figas

#include "BattleTank.h"
#include "Tank.h"
#include "TankAIController.h"

// Called every frame
void ATankAIController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	auto PlayerTank = Cast<ATank>(GetWorld()->GetFirstPlayerController()->GetPawn());
	auto ControlledTank = Cast<ATank>(GetPawn());


	if (PlayerTank)
	{
		// TODO Move towards the player

		// Aim towards the player
		ControlledTank->AimAt(PlayerTank->GetActorLocation());

		// Fire
		ControlledTank->Fire(); // TODO limit firing rate
	}

}

void ATankAIController::BeginPlay()
{
	Super::BeginPlay();
}



