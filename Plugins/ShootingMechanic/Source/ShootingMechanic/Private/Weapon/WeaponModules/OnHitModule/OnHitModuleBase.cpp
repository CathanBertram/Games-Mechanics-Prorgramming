// Fill out your copyright notice in the Description page of Project Settings.


#include "Weapon/WeaponModules/OnHitModule/OnHitModuleBase.h"

UOnHitModuleBase::UOnHitModuleBase()
{
	moduleType = WeaponModuleType::OnHit;
}

UOnHitModuleBase* UOnHitModuleBase::GetOnHitModule_Implementation()
{
	return this;
}

void UOnHitModuleBase::OnHit_Implementation(AGun* gun, FHitResult hit)
{
}

void UOnHitModuleBase::DoHit(AGun* gun, FHitResult hit)
{
	OnHit(gun, hit);
}
