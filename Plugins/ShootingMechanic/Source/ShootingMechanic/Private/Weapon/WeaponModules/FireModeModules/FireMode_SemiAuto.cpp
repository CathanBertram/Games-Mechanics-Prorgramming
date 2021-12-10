// Fill out your copyright notice in the Description page of Project Settings.


#include "Weapon/WeaponModules/FireModeModules/FireMode_SemiAuto.h"

void UFireMode_SemiAuto::OnFirePressed(AGun* Gun)
{
	Shoot(Gun);
}

void UFireMode_SemiAuto::OnFireReleased(AGun* Gun)
{
}

void UFireMode_SemiAuto::Shoot(AGun* Gun)
{
	shootType->OnShoot(Gun);
}
