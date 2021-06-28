// Copyright Epic Games, Inc. All Rights Reserved.

#include "FootAlgorithmGameMode.h"
#include "FootAlgorithmCharacter.h"
#include "UObject/ConstructorHelpers.h"

AFootAlgorithmGameMode::AFootAlgorithmGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
