// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

#include "Camera/CameraComponent.h"
#include "GameFramework/Actor.h"
#include "ShootingSystem/Interfaces/Equippable.h"
#include "ShootingSystem/Interfaces/Fireable.h"

#include "Gun.generated.h"

UCLASS()
class SHOOTINGSYSTEM_API AGun : public AActor, public IFireable, public IEquippable
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AGun();

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void FireStart();
	virtual void FireStart_Implementation() override;
	
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void FireRelease();
	virtual void FireRelease_Implementation() override;

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void Equip(UCameraComponent* camera);
	virtual void Equip_Implementation(UCameraComponent* camera) override;
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void Unequip();
	virtual void Unequip_Implementation() override;
	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	UPROPERTY(VisibleDefaultsOnly)
	class USceneComponent* root;

	UPROPERTY(VisibleDefaultsOnly)
	class USkeletalMeshComponent* gunMesh;

	UPROPERTY(BlueprintReadWrite)
	class USceneComponent* gunMuzzle;

	UPROPERTY(VisibleAnywhere, Category = "Weapon Statistics")
	float damage;
	UPROPERTY(VisibleAnywhere, Category = "Weapon Statistics")
	float range;
	UPROPERTY(VisibleAnywhere, Category = "Weapon Statistics")
	float roundsPerMinute;

	void AddRecoil();
	
	UCameraComponent* cameraReference;
};
