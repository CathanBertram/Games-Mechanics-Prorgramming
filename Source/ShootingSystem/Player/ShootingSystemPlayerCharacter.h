// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "ShootingSystem/Interfaces/Initable.h"
#include "ShootingSystem/Interfaces/Inputable.h"
#include "ShootingSystemPlayerCharacter.generated.h"

UCLASS()
class SHOOTINGSYSTEM_API AShootingSystemPlayerCharacter : public ACharacter, public IInputable, public IInitable
{
	GENERATED_BODY()

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class UCameraComponent* m_FPCameraComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class UChildActorComponent* m_GunChildActor;
public:
	// Sets default values for this character's properties
	AShootingSystemPlayerCharacter();


	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera)
	float m_BaseLookVerticalRate;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera)
	float m_BaseLookHorizontalRate;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Character)
	float m_InteractRange;

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void Init();
	virtual void Init_Implementation() override;
	
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
