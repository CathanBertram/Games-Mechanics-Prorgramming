// Fill out your copyright notice in the Description page of Project Settings.


#include "RecoilPatternFactory.h"

#include "ShootingMechanic/Weapon/Public/RecoilPattern.h"

URecoilPatternFactory::URecoilPatternFactory()
{
	bCreateNew = true;
	bEditAfterNew = true;
	SupportedClass = URecoilPattern::StaticClass();
}

UObject* URecoilPatternFactory::FactoryCreateNew(UClass* InClass, UObject* InParent, FName InName, EObjectFlags Flags,
	UObject* Context, FFeedbackContext* Warn)
{
	URecoilPattern* recoilPattern = NewObject<URecoilPattern>(InParent, InClass, InName, Flags);
	return recoilPattern;
}

FText URecoilPatternFactory::GetDisplayName() const
{
	return FText::FromString("Recoil Pattern");
}
