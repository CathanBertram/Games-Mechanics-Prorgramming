// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Weapon/WeaponModules/WeaponModuleBase.h"
#include "Weapon/WeaponModules/ShootModules/Shoot_Base.h"
#include "FireModeModuleBase.generated.h"

class AGun;
/**
 * 
 */
UCLASS(Blueprintable, Abstract)
class SHOOTINGMECHANIC_API UFireModeModuleBase : public UWeaponModuleBase
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintCallable)
	virtual void OnFirePressed(AGun* gun) {};
	UFUNCTION(BlueprintCallable)
	virtual void OnFireReleased(AGun* gun) {};

	virtual void Shoot(AGun* gun) {};

	virtual void Initialise(AGun* gun) override;
	
	UPROPERTY(EditAnywhere, Instanced)
	UShoot_Base* shootType;
};
