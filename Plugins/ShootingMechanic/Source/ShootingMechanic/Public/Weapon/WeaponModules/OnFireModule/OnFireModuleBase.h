// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Weapon/WeaponModules/GetShootBaseModule.h"
#include "Weapon/WeaponModules/WeaponModuleBase.h"
#include "OnFireModuleBase.generated.h"

/**
 * 
 */
UCLASS()
class SHOOTINGMECHANIC_API UOnFireModuleBase : public UWeaponModuleBase, public IGetOnFireBaseModule
{
	GENERATED_BODY()
public:
	UOnFireModuleBase();

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	UOnFireModuleBase* GetOnFireModule();
	virtual UOnFireModuleBase* GetOnFireModule_Implementation() override;
};
