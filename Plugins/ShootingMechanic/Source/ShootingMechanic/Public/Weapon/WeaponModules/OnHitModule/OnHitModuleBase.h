// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Weapon/WeaponModules/GetShootBaseModule.h"
#include "Weapon/WeaponModules/WeaponModuleBase.h"
#include "OnHitModuleBase.generated.h"

/**
 * 
 */
UCLASS()
class SHOOTINGMECHANIC_API UOnHitModuleBase : public UWeaponModuleBase, public IGetOnHitBaseModule
{
	GENERATED_BODY()
public:
	UOnHitModuleBase();

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	UOnHitModuleBase* GetOnHitModule();
	virtual UOnHitModuleBase* GetOnHitModule_Implementation() override;
};
