// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Weapon/WeaponModules/FireModeModules/FireMode_SemiAuto.h"
#include "FireMode_FullAuto.generated.h"

/**
 * 
 */
UCLASS(Blueprintable, EditInlineNew)
class SHOOTINGMECHANIC_API UFireMode_FullAuto : public UFireMode_SemiAuto
{
	GENERATED_BODY()
protected:
	bool isFiring;
	

	FTimerHandle repeatTimer;
	FTimerDelegate repeatDelegate;

	virtual void Initialise(AGun* gun) override;
	virtual void OnFirePressed(AGun* gun) override;
	virtual void OnFireReleased(AGun* gun) override;
	UFUNCTION()
	void FireRepeater(AGun* gun);
};
