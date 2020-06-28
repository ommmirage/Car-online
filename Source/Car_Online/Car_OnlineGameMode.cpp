// Copyright Epic Games, Inc. All Rights Reserved.

#include "Car_OnlineGameMode.h"
#include "Car_OnlinePawn.h"
#include "Car_OnlineHud.h"

ACar_OnlineGameMode::ACar_OnlineGameMode()
{
	DefaultPawnClass = ACar_OnlinePawn::StaticClass();
	HUDClass = ACar_OnlineHud::StaticClass();
}
