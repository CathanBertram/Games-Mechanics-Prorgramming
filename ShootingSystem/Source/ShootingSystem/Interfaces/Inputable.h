// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "Inputable.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UInputable : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class SHOOTINGSYSTEM_API IInputable
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	//Action Mappings
	//Jump Functions
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
		void JumpPressed();
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
		void JumpReleased();

	//Fire Functions
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
		void FirePressed();
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
		void FireReleased();

	//Interact Functions
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
		void InteractPressed();
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
		void InteractReleased();

	//Axis Mappings
	//Move
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
		void MoveVertical(float value); //Forward/Backwards
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
		void MoveHorizontal(float value); //Left/Right

	//Look
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
		void LookVertical(float value); //Up/Down
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
		void LookHorizontal(float value); //Left/Right

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
		void LookVerticalAtRate(float rate); //Up/Down Controller
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
		void LookHorizontalAtRate(float rate); //Left/Right Controller
};
