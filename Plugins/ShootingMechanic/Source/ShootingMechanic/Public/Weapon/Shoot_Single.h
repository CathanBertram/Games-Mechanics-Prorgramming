// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Shoot_Base.h"


#include "Shoot_Single.generated.h"

/**
 * 
 */
UCLASS(EditInlineNew)
class SHOOTINGMECHANIC_API UShoot_Single : public UShoot_Base
{
	GENERATED_BODY()
public:
	UShoot_Single();
	~UShoot_Single();

	virtual void OnShoot(UWorld* world, AGun* gun) override;
};
