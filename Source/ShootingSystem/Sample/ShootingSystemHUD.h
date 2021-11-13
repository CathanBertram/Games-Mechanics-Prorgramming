// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "ShootingSystemHUD.generated.h"

UCLASS()
class AShootingSystemHUD : public AHUD
{
	GENERATED_BODY()

public:
	AShootingSystemHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

