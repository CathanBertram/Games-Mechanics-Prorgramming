// Fill out your copyright notice in the Description page of Project Settings.


#include "ShootingMechanic/Public/Weapon/RecoilPattern.h"

FVector2D URecoilPattern::GetRecoilAtIndex(int index)
{
	if (recoil.Num() == 0)
	{
		GEngine->AddOnScreenDebugMessage(-1, 3 , FColor::Red, TEXT("Weapon Has No Recoil Pattern"));
		return FVector2D::ZeroVector;
	}
	
	if (index >= recoil.Num())
	{
		return recoil[FMath::RandRange(0,recoil.Num())];
	}
	return recoil[index];
}
