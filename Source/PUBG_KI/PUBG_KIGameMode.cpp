// Copyright Epic Games, Inc. All Rights Reserved.

#include "PUBG_KIGameMode.h"
#include "PUBG_KICharacter.h"
#include "UObject/ConstructorHelpers.h"

APUBG_KIGameMode::APUBG_KIGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
