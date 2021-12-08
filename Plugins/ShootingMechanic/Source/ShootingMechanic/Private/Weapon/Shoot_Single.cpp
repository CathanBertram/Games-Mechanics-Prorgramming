// Fill out your copyright notice in the Description page of Project Settings.


#include "Weapon/Shoot_Single.h"

#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetSystemLibrary.h"

UShoot_Single::UShoot_Single()
{
}

UShoot_Single::~UShoot_Single()
{
}

void UShoot_Single::OnShoot(UWorld* world, AGun* gun)
{
	if (UKismetSystemLibrary::DoesImplementInterface(UGameplayStatics::GetGameMode(world), UGetShootingSystemGamemode::StaticClass()))
	{
		AShootingSystemGamemode* gamemode = IGetShootingSystemGamemode::Execute_GetShootingSystemGamemode(UGameplayStatics::GetGameMode(world));
		ShootWithGamemode(gun, world, gamemode);
	}
	else
	{
		ShootWithoutGamemode(gun, world);
	}
}
