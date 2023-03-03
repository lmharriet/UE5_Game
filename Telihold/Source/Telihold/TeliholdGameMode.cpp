// Copyright Epic Games, Inc. All Rights Reserved.

#include "TeliholdGameMode.h"
#include "TeliholdCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATeliholdGameMode::ATeliholdGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
