// Copyright Epic Games, Inc. All Rights Reserved.

#include "ShootingSystemGameMode.h"
#include "ShootingSystemHUD.h"
#include "ShootingSystemCharacter.h"
#include "UObject/ConstructorHelpers.h"

AShootingSystemGameMode::AShootingSystemGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AShootingSystemHUD::StaticClass();
}
