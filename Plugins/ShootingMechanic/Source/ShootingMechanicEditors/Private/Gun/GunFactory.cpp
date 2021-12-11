// Fill out your copyright notice in the Description page of Project Settings.


#include "Gun/GunFactory.h"

#include "Weapon/Gun.h"


// Sets default values
UGunFactory::UGunFactory()
{
	bCreateNew = true;
	bEditAfterNew = true;
	SupportedClass = AGun::StaticClass();
}

UObject* UGunFactory::FactoryCreateNew(UClass* InClass, UObject* InParent, FName InName, EObjectFlags Flags,
	UObject* Context, FFeedbackContext* Warn)
{
	AGun* newGun = NewObject<AGun>(InParent, InClass, InName, Flags | RF_Transactional);
	return newGun;
}


