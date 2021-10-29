// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "ShootingSystem/Interfaces/Initable.h"

#include "ProjectController.generated.h"

/**
 * 
 */
UCLASS()
class SHOOTINGSYSTEM_API AProjectController : public APlayerController, public IInitable
{
	GENERATED_BODY()

	AProjectController();
	virtual void SetupInputComponent() override;

	public:
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void Init();
	virtual void Init_Implementation() override;

	protected:
	UPROPERTY(EditAnywhere)
	TSubclassOf<APawn> pawnToSpawn;

	UPROPERTY(EditAnywhere, Category=Camera)
	float MouseHorizontalRate;

	UPROPERTY(EditAnywhere, Category=Camera)
	float MouseVerticalRate;

	private:
	void JumpPressed(); void JumpReleased();
	void FirePressed(); void FireReleased();
	void InteractPressed();

	void MoveVertical(float value);
	void MoveHorizontal(float value);
	void LookVertical(float value);
	void LookHorizontal(float value);
};
