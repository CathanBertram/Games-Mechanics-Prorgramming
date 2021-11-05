// Fill out your copyright notice in the Description page of Project Settings.


#include "Gun_Auto.h"

AGun_Auto::AGun_Auto()
{
	isFiring = true;
}

void AGun_Auto::FireRepeater()
{
	if (isFiring)
	{
		Super::Shoot();
		GetWorldTimerManager().SetTimer(repeatTimer, this, &AGun_Auto::FireRepeater, 60 / roundsPerMinute);
	}
}

void AGun_Auto::FireStart_Implementation()
{
	isFiring = true;
	FireRepeater();
}

void AGun_Auto::FireRelease_Implementation()
{
	isFiring = false;
}
