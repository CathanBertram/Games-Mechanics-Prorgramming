// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Weapon/WeaponModules/FireModeModules/FireModeModuleBase.h"
#include "FireMode_SemiAuto.generated.h"

/**
 * 
 */
UCLASS(Blueprintable, EditInlineNew)
class SHOOTINGMECHANIC_API UFireMode_SemiAuto : public UFireModeModuleBase
{
	GENERATED_BODY()
public:
	virtual void OnFirePressed(AGun* gun) override;
	virtual void OnFireReleased(AGun* gun) override;
	virtual void Shoot(AGun* gun) override;
};
