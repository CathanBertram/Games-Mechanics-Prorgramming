// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Framework/Commands/Commands.h"
#include "ShootingMechanicStyle.h"

class FShootingMechanicCommands : public TCommands<FShootingMechanicCommands>
{
public:

	FShootingMechanicCommands()
		: TCommands<FShootingMechanicCommands>(TEXT("ShootingMechanic"), NSLOCTEXT("Contexts", "ShootingMechanic", "ShootingMechanic Plugin"), NAME_None, FShootingMechanicStyle::GetStyleSetName())
	{
	}

	// TCommands<> interface
	virtual void RegisterCommands() override;

public:
	TSharedPtr< FUICommandInfo > OpenPluginWindow;
};