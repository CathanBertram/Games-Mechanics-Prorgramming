// Copyright Epic Games, Inc. All Rights Reserved.

#include "ShootingMechanicCommands.h"

#define LOCTEXT_NAMESPACE "FShootingMechanicModule"

void FShootingMechanicCommands::RegisterCommands()
{
	UI_COMMAND(OpenPluginWindow, "ShootingMechanic", "Bring up ShootingMechanic window", EUserInterfaceActionType::Button, FInputGesture());
}

#undef LOCTEXT_NAMESPACE
