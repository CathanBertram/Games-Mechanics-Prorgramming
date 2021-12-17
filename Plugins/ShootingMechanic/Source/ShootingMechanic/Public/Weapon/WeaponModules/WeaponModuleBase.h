// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "WeaponModuleType.h"
#include "UObject/NoExportTypes.h"
#include "WeaponModuleBase.generated.h"

class AGun;
/**
 * 
 */
UCLASS(Blueprintable, Abstract, EditInlineNew)
class SHOOTINGMECHANIC_API UWeaponModuleBase : public UObject
{
	GENERATED_BODY()

protected:
	TEnumAsByte<WeaponModuleType> moduleType;

public:
	TEnumAsByte<WeaponModuleType> ModuleType() {return moduleType;}
	virtual void Initialise(AGun* gun) {};

	virtual void OnActivate(AGun* gun) {};
	virtual void OnDeactivate(AGun* gun) {};
};
