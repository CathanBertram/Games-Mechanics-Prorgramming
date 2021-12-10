// Fill out your copyright notice in the Description page of Project Settings.


#include "Weapon/WeaponModules/FireModeModules/FireModeModuleBase.h"

void UFireModeModuleBase::Initialise(AGun* Gun)
{
	Super::Initialise(Gun);
	shootType->Initialise(Gun);
}
