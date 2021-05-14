// Copyright Epic Games, Inc. All Rights Reserved.

#include "Seq2GameMode.h"
#include "Seq2Pawn.h"
#include "Seq2Hud.h"

ASeq2GameMode::ASeq2GameMode()
{
	DefaultPawnClass = ASeq2Pawn::StaticClass();
	HUDClass = ASeq2Hud::StaticClass();
}
