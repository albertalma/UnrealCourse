// Copyright Epic Games, Inc. All Rights Reserved.

#include "UnrealCourseGameMode.h"
#include "UnrealCourseCharacter.h"
#include "UObject/ConstructorHelpers.h"

AUnrealCourseGameMode::AUnrealCourseGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
