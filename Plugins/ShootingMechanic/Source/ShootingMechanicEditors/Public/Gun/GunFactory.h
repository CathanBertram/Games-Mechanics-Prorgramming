// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GunFactory.generated.h"

UCLASS()
class SHOOTINGMECHANICEDITORS_API UGunFactory : public UFactory
{
	GENERATED_BODY()

public:
	UGunFactory();
	virtual UObject* FactoryCreateNew(UClass* InClass, UObject* InParent, FName InName, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn) override;

};
