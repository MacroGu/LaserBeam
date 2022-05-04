// Copyright Epic Games, Inc. All Rights Reserved.

#include "LaserBeamGameMode.h"
#include "LaserBeamHUD.h"
#include "LaserBeamCharacter.h"
#include "UObject/ConstructorHelpers.h"

ALaserBeamGameMode::ALaserBeamGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = ALaserBeamHUD::StaticClass();
}
