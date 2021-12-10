// Fill out your copyright notice in the Description page of Project Settings.


#include "Weapon/WeaponModules/FireModeModules/FireMode_FullAuto.h"

#include "Weapon/Gun.h"

void UFireMode_FullAuto::Initialise(AGun* gun)
{
	Super::Initialise(gun);
	repeatDelegate.BindUFunction(this, FName("FireRepeater"), gun);
}

void UFireMode_FullAuto::OnFirePressed(AGun* Gun)
{
	isFiring = true;
	FireRepeater(Gun);
}

void UFireMode_FullAuto::OnFireReleased(AGun* Gun)
{
	isFiring = false;
}

void UFireMode_FullAuto::FireRepeater(AGun* gun)
{
	if(!gun->CheckAmmo()) return;
	if (isFiring )
	{
		Shoot(gun);
		GetWorld()->GetTimerManager().SetTimer(repeatTimer, repeatDelegate,  shootType->TimeBetweenShots(), false);
	}
}