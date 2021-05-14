// Copyright Epic Games, Inc. All Rights Reserved.
#pragma once
#include "GameFramework/HUD.h"
#include "Seq2Hud.generated.h"


UCLASS(config = Game)
class ASeq2Hud : public AHUD
{
	GENERATED_BODY()

public:
	ASeq2Hud();

	/** Font used to render the vehicle info */
	UPROPERTY()
	UFont* HUDFont;

	// Begin AHUD interface
	virtual void DrawHUD() override;
	// End AHUD interface
};
