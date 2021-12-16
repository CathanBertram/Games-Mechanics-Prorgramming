// Fill out your copyright notice in the Description page of Project Settings.


#include "Weapon/WeaponModules/OnFireModule/OnFireModuleBase.h"

UOnFireModuleBase::UOnFireModuleBase()
{
	moduleType = WeaponModuleType::OnFire;
}

UOnFireModuleBase* UOnFireModuleBase::GetOnFireModule_Implementation()
{
	return this;
}
