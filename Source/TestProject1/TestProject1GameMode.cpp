// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "TestProject1GameMode.h"
#include "TestProject1Character.h"
#include "UObject/ConstructorHelpers.h"

ATestProject1GameMode::ATestProject1GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
