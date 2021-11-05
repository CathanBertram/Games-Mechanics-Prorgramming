// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

#include "Camera/CameraComponent.h"
#include "GameFramework/Actor.h"
#include "ShootingSystem/Interfaces/Equippable.h"
#include "ShootingSystem/Interfaces/Fireable.h"
#include "ShootingSystem/Interfaces/GetGun.h"
#include "ShootingSystem/Interfaces/Reloadable.h"

#include "Gun.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnShoot, float, xRecoil, float, yRecoil);

UCLASS()
class SHOOTINGSYSTEM_API AGun : public AActor, public IFireable, public IEquippable, public IGetGun, public IReloadable
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AGun();
	~AGun();

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void FireStart();
	virtual void FireStart_Implementation() override;
	
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void FireRelease();
	virtual void FireRelease_Implementation() override;

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void Reload();
	virtual void Reload_Implementation() override;

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void Equip(UCameraComponent* camera);
	virtual void Equip_Implementation(UCameraComponent* camera) override;
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void Unequip();
	virtual void Unequip_Implementation() override;

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	AGun* GetGun();
	virtual AGun* GetGun_Implementation() override;
	
	FOnShoot OnShoot;
	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	UPROPERTY(VisibleDefaultsOnly)
	class USceneComponent* root;

	UPROPERTY(VisibleDefaultsOnly)
	class USkeletalMeshComponent* gunMesh;

	UPROPERTY(BlueprintReadWrite)
	class USceneComponent* gunMuzzle;

	UPROPERTY(EditAnywhere, Category = "Weapon Statistics")
	float damage;
	UPROPERTY(EditAnywhere, Category = "Weapon Statistics")
	float range;
	UPROPERTY(EditAnywhere, Category = "Weapon Statistics")
	float roundsPerMinute;
	
	int curAmmo;
	int curTotalAmmo;
	UPROPERTY(EditAnywhere, Category = "Weapon Statistics")
	int maxAmmoInMag;
	UPROPERTY(EditAnywhere, Category = "Weapon Statistics")
	int totalAmmoCapacity;
	
	bool canShoot;
	void ResetCanShoot();

	FTimerHandle resetShootTimer;
	
	virtual void AddRecoil();
	void Shoot();
	
	UCameraComponent* cameraReference;

private:
	bool CheckAmmo() {return curAmmo > 0;}
};
