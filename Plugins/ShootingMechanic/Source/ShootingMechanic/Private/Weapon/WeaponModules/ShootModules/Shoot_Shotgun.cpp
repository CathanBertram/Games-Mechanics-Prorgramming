// Fill out your copyright notice in the Description page of Project Settings.


#include "Weapon/WeaponModules/ShootModules/Shoot_Shotgun.h"

UShoot_Shotgun::UShoot_Shotgun()
{
	projectileCount = 1;
}

void UShoot_Shotgun::ShootWithGamemode(AGun* Gun, AShootingSystemGamemode* Gamemode)
{
	for (int i = 0; i < projectileCount; ++i)
	{
		Super::ShootWithGamemode(Gun, Gamemode);
	}
}

void UShoot_Shotgun::ShootWithoutGamemode(AGun* Gun)
{
	for (int i = 0; i < projectileCount; ++i)
	{
		Super::ShootWithoutGamemode(Gun);
	}
}
