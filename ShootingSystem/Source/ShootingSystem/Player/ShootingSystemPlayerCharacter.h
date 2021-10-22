// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "ShootingSystem/Interfaces/Inputable.h"

#include "ShootingSystemPlayerCharacter.generated.h"

UCLASS()
class SHOOTINGSYSTEM_API AShootingSystemPlayerCharacter : public ACharacter, public IInputable
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AShootingSystemPlayerCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

#pragma region InputableInterface
	//Action Mappings
	//Jump
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
		void JumpPressed();
	virtual void JumpPressed_Implementation() override;
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
		void JumpReleased();
	virtual void JumpReleased_Implementation() override;

	//Fire
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
		void FirePressed();
	virtual void FirePressed_Implementation() override;
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
		void FireReleased();
	virtual void FireReleased_Implementation() override;

	//Interact
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
		void InteractPressed();
	virtual void InteractPressed_Implementation() override;
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
		void InteractReleased();
	virtual void InteractReleased_Implementation() override;

	//Axis Mappings
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
		void MoveVertical(float value);
	virtual void MoveVertical_Implementation(float value) override;
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
		void MoveHorizontal(float value);
	virtual void MoveHorizontal_Implementation(float value) override;

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
		void LookVertical(float value);
	virtual void LookVertical_Implementation(float value) override;
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
		void LookHorizontal(float value);
	virtual void LookHorizontal_Implementation(float value) override;

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
		void LookVerticalAtRate(float rate);
	virtual void LookVerticalAtRate_Implementation(float rate) override;
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
		void LookHorizontalAtRate(float rate);
	virtual void LookHorizontalAtRate_Implementation(float rate) override;

#pragma endregion

};
