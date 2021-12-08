// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ShootingSystemGamemode.h"


#include "Shoot_Base.generated.h"

class AGun;

UCLASS(EditInlineNew)
class SHOOTINGMECHANIC_API UShoot_Base : public UObject
{
	GENERATED_BODY()
public:
	UShoot_Base();
	virtual ~UShoot_Base();
	
	virtual void OnShoot(UWorld* world, AGun* gun);
	
protected:
	void ShootWithGamemode(AGun* gun, UWorld* world, AShootingSystemGamemode* gamemode);
	void ShootWithoutGamemode(AGun* gun, UWorld* world);
	FVector GetBulletDirection(UCameraComponent* cameraReference, float accurateRange);
};


