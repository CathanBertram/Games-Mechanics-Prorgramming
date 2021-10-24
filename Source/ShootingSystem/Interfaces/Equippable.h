// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

#include "Camera/CameraComponent.h"
#include "UObject/Interface.h"
#include "Equippable.generated.h"

// This class does not need to be modified.
UINTERFACE()
class UEquippable : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class SHOOTINGSYSTEM_API IEquippable
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void Equip(UCameraComponent* camera);
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void Unequip(UCameraComponent* camera);
};
