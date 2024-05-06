// Copyright Epic Games, Inc. All Rights Reserved.

#include "BuilderGameMode.h"
#include "BuilderCharacter.h"
#include "UObject/ConstructorHelpers.h"

ABuilderGameMode::ABuilderGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
