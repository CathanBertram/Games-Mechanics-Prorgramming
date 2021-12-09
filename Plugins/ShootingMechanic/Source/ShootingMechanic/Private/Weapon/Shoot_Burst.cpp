// Fill out your copyright notice in the Description page of Project Settings.


#include "Weapon/Shoot_Burst.h"

#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Weapon/Gun.h"


void UShoot_Burst::OnShoot(UWorld* world, AGun* gun)
{
	bulletIndex = 0;
	if (UKismetSystemLibrary::DoesImplementInterface(UGameplayStatics::GetGameMode(world), UGetShootingSystemGamemode::StaticClass()))
	{
		AShootingSystemGamemode* gamemode = IGetShootingSystemGamemode::Execute_GetShootingSystemGamemode(UGameplayStatics::GetGameMode(world));
		resetShootDelegate.BindUObject(this, &UShoot_Burst::ShootWithGamemode, gun, world, gamemode);
		ShootWithGamemode(gun, world, gamemode);
	}
	else
	{
		resetShootDelegate.BindUObject(this, &UShoot_Burst::ShootWithoutGamemode, gun, world);
		ShootWithoutGamemode(gun, world);
	}
	gun->StartResetShootTimer(burstResetCooldown + (gun->TimeBetweenShots() * burstProjectileCount));

}

void UShoot_Burst::ShootWithoutGamemode(AGun* gun, UWorld* world)
{
	Super::ShootWithoutGamemode(gun, world);
	bulletIndex++;
	if (bulletIndex >= burstProjectileCount)
		return;

	world->GetTimerManager().SetTimer(resetShootHandle, resetShootDelegate, gun->TimeBetweenShots(), false);
}

void UShoot_Burst::ShootWithGamemode(AGun* gun, UWorld* world, AShootingSystemGamemode* Gamemode)
{
	Super::ShootWithGamemode(gun, world, Gamemode);
	if (bulletIndex >= burstProjectileCount)
		return;
	
	world->GetTimerManager().SetTimer(resetShootHandle, resetShootDelegate, gun->TimeBetweenShots(), false);
}
