// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Shoot_Base.h"
#include "Shoot_Burst.generated.h"

/**
 * 
 */
UCLASS(Blueprintable, EditInlineNew)
class SHOOTINGMECHANIC_API UShoot_Burst : public UShoot_Base
{
	GENERATED_BODY()
	
protected:
	virtual void OnShoot(AGun* gun) override;
	UFUNCTION()
	virtual void ShootWithoutGamemode(AGun* gun) override;
	UFUNCTION()
	virtual void ShootWithGamemode(AGun* gun, AShootingSystemGamemode* gamemode) override;

	UPROPERTY(EditAnywhere)
	int burstProjectileCount;

	UPROPERTY(EditAnywhere)
	float burstResetCooldown = 1.f;
	
	int bulletIndex;
	FTimerDelegate resetShootDelegate;
	FTimerHandle resetShootHandle;
};
