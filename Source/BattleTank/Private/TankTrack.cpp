// Copyright C 2017 Tomasz Figas

#include "BattleTank.h"
#include "TankTrack.h"




void UTankTrack::SetThrottle(float Throttle)
{
	auto Name = GetName();
	UE_LOG(LogTemp, Warning, TEXT("%f throttle: %f"), *Name, Throttle);

	// TODO clamp actual throttle value so player can't over-drive
}