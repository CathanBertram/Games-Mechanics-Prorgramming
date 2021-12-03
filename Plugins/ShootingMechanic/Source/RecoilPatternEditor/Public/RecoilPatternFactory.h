// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Factories/Factory.h"
#include "RecoilPatternFactory.generated.h"

/**
 * 
 */
UCLASS()
class RECOILPATTERNEDITOR_API URecoilPatternFactory : public UFactory
{
	GENERATED_BODY()

public:
	URecoilPatternFactory();

	virtual UObject* FactoryCreateNew(UClass* InClass, UObject* InParent, FName InName, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn) override;
	
	virtual FText GetDisplayName() const override;
};
