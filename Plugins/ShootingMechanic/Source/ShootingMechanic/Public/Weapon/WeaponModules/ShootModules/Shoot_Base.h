// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ShootingSystemGamemode.h"
#include "UObject/NoExportTypes.h"
#include "Weapon/WeaponModules/WeaponModuleBase.h"
#include "Shoot_Base.generated.h"

class UCameraComponent;
class AGun;
/**
 * 
 */

DECLARE_DELEGATE(FFinishShoot)

UCLASS(Blueprintable)
class SHOOTINGMECHANIC_API UShoot_Base : public UWeaponModuleBase
{
	GENERATED_BODY()
protected:
	UShoot_Base();
	
public:
	virtual void OnShoot(AGun* gun);
	FFinishShoot finishShoot;
protected:
	virtual void ShootWithGamemode(AGun* gun, AShootingSystemGamemode* gamemode);
	virtual void ShootWithoutGamemode(AGun* gun);
	FVector GetBulletDirection(UCameraComponent* cameraReference);

	void ConsumeAmmo();
	void AddRecoil();
	
	UPROPERTY(EditAnywhere)
	float damage;
	UPROPERTY(EditAnywhere)
	float accurateRange;
	UPROPERTY(EditAnywhere)
	float maxRange;
	UPROPERTY(EditAnywhere)
	float roundsPerMinute;
public:
	float TimeBetweenShots() { return 60 / roundsPerMinute; }
};
