// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Shoot_Base.h"
#include "Shoot_Burst.generated.h"

/**
 * 
 */
UCLASS(EditInlineNew, Blueprintable)
class SHOOTINGMECHANIC_API UShoot_Burst : public UShoot_Base
{
	GENERATED_BODY()
	
protected:
	virtual void OnShoot(UWorld* world, AGun* gun) override;
	virtual void ShootWithoutGamemode(AGun* gun, UWorld* world) override;
	virtual void ShootWithGamemode(AGun* gun, UWorld* world, AShootingSystemGamemode* gamemode) override;

	UPROPERTY(EditAnywhere)
	int burstProjectileCount;

	UPROPERTY(EditAnywhere)
	float burstResetCooldown = 1.f;
	
	int bulletIndex;
	FTimerDelegate resetShootDelegate;
	FTimerHandle resetShootHandle;
};
