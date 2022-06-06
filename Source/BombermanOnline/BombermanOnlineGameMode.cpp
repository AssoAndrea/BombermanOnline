// Copyright Epic Games, Inc. All Rights Reserved.

#include "BombermanOnlineGameMode.h"
#include "BombermanOnlineCharacter.h"
#include "UObject/ConstructorHelpers.h"

ABombermanOnlineGameMode::ABombermanOnlineGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
