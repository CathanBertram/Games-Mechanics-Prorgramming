// Fill out your copyright notice in the Description page of Project Settings.


#include "Weapon/WeaponModules/ShootModules/Shoot_Burst.h"

#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Weapon/Gun.h"


void UShoot_Burst::OnShoot(AGun* gun)
{
	resetShootDelegate.Unbind();
	
	bulletIndex = 0;
	const auto world = GetWorld();
	
	if (UKismetSystemLibrary::DoesImplementInterface(UGameplayStatics::GetGameMode(world), UGetShootingSystemGamemode::StaticClass()))
	{
		AShootingSystemGamemode* gamemode = IGetShootingSystemGamemode::Execute_GetShootingSystemGamemode(UGameplayStatics::GetGameMode(world));
		resetShootDelegate.BindUFunction(this, FName("ShootWithGamemode"), gun, gamemode);
		ShootWithGamemode(gun, gamemode);
	}
	else
	{
		resetShootDelegate.BindUFunction(this, FName("ShootWithoutGamemode"), gun);
		ShootWithoutGamemode(gun);
	}
	gun->StartResetShootTimer(burstResetCooldown + (TimeBetweenShots() * burstProjectileCount));

}

void UShoot_Burst::ShootWithoutGamemode(AGun* gun)
{
	Super::ShootWithoutGamemode(gun);
	bulletIndex++;
	if (bulletIndex >= burstProjectileCount)
		return;
	
	auto t = TimeBetweenShots();
	GetWorld()->GetTimerManager().SetTimer(resetShootHandle, resetShootDelegate, t, false);
}

void UShoot_Burst::ShootWithGamemode(AGun* gun, AShootingSystemGamemode* Gamemode)
{
	Super::ShootWithGamemode(gun, Gamemode);
	bulletIndex++;
	if (bulletIndex >= burstProjectileCount)
		return;
	
	auto t = TimeBetweenShots();
	GetWorld()->GetTimerManager().SetTimer(resetShootHandle, resetShootDelegate, t, false);
}
