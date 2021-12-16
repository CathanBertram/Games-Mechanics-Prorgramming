// Fill out your copyright notice in the Description page of Project Settings.


#include "Weapon/WeaponModules/FireModeModules/FireModeModuleBase.h"

UFireModeModuleBase::UFireModeModuleBase()
{
	shootType = NewObject<UShoot_Base>();
	moduleType = WeaponModuleType::FireMode;
}

UFireModeModuleBase* UFireModeModuleBase::GetFireModeBaseModule_Implementation()
{
	return this;
}

void UFireModeModuleBase::Initialise(AGun* Gun)
{
	Super::Initialise(Gun);
	shootType->Initialise(Gun);
}

void UFireModeModuleBase::OnActivate(AGun* Gun)
{
	OnFirePressed(Gun);
}

void UFireModeModuleBase::OnDeactivate(AGun* Gun)
{
	OnFireReleased(Gun);
}
