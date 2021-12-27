// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "ShootingSystemPlayerCharacter.generated.h"

UCLASS()
class SHOOTINGMECHANIC_API AShootingSystemPlayerCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AShootingSystemPlayerCharacter();

protected:

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class UCameraComponent* m_FPCameraComponent;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	class UChildActorComponent* m_GunChildActor;

	void FirePress();
	void FireRelease();
	void AltFirePress();
	void AltFireRelease();
	void ReloadPress();
	UFUNCTION()
	void OnShoot(FVector2D recoil);

	void EquipGun(AActor* gunToEquip);
	void UnequipGun(AActor* gunToUnequip);

	void Initialise();
};
