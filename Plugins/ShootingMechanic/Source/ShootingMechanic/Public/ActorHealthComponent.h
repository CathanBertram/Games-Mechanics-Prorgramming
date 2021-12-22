// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ActorHealthComponent.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnHitDelegate, float, damage, AActor*, damageCauser);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnDeathDelegate);

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class SHOOTINGMECHANIC_API UActorHealthComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UActorHealthComponent();

protected:
	virtual void BeginPlay() override;
		
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	float health;
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	bool canDie;
	UPROPERTY(BlueprintReadOnly)
	bool isDead;

	UFUNCTION()
    void TakeDamage(AActor* DamagedActor, float Damage, const class UDamageType* DamageType, class AController* InstigatedBy, AActor* DamageCauser);

	UPROPERTY(BlueprintAssignable)
    FOnHitDelegate OnHit;
	
	UPROPERTY(BlueprintAssignable)
    FOnDeathDelegate OnDeath;
};
