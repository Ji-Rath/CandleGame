// Copyright Epic Games, Inc. All Rights Reserved.

#include "CandleGameGameMode.h"
#include "CandleGameCharacter.h"
#include "UObject/ConstructorHelpers.h"

ACandleGameGameMode::ACandleGameGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
