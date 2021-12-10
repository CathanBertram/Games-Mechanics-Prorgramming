// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Weapon/WeaponModules/ShootModules/Shoot_Base.h"
#include "Shoot_Shotgun.generated.h"

/**
 * 
 */
UCLASS(Blueprintable, EditInlineNew)
class SHOOTINGMECHANIC_API UShoot_Shotgun : public UShoot_Base
{
	GENERATED_BODY()

protected:
	UShoot_Shotgun();
	
	UPROPERTY(EditAnywhere)
	int projectileCount;

	virtual void ShootWithGamemode(AGun* gun, AShootingSystemGamemode* gamemode) override;
	virtual void ShootWithoutGamemode(AGun* gun) override;
};
