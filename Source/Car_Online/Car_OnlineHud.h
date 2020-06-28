// Copyright Epic Games, Inc. All Rights Reserved.
#pragma once
#include "GameFramework/HUD.h"
#include "Car_OnlineHud.generated.h"


UCLASS(config = Game)
class ACar_OnlineHud : public AHUD
{
	GENERATED_BODY()

public:
	ACar_OnlineHud();

	/** Font used to render the vehicle info */
	UPROPERTY()
	UFont* HUDFont;

	// Begin AHUD interface
	virtual void DrawHUD() override;
	// End AHUD interface
};
