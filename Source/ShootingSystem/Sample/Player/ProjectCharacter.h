// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

#include "ShootingMechanic/Public/Player/ShootingSystemPlayerCharacter.h"
#include "ShootingSystem/Sample/Interfaces/Initable.h"
#include "ShootingSystem/Sample/Interfaces/Inputable.h"
#include "ProjectCharacter.generated.h"

UCLASS()
class SHOOTINGSYSTEM_API AProjectCharacter : public AShootingSystemPlayerCharacter, public IInputable, public IInitable
{
	GENERATED_BODY()

	
public:
	// Sets default values for this character's properties
	AProjectCharacter();

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void Init();
	virtual void Init_Implementation() override;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Camera)
	float m_BaseLookVerticalRate;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Camera)
	float m_BaseLookHorizontalRate;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Camera)
	float m_MouseSens;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Character)
	float m_InteractRange;
	
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

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void ReloadPressed();
	virtual void ReloadPressed_Implementation() override;

	//Interact
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
		void InteractPressed();
	virtual void InteractPressed_Implementation() override;

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

#pragma endregion
};
