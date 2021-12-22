// Fill out your copyright notice in the Description page of Project Settings.


#include "ActorHealthComponent.h"
// Sets default values for this component's properties
UActorHealthComponent::UActorHealthComponent()
{
	health = 100;
	isDead = false;
	canDie = true;
}


// Called when the game starts
void UActorHealthComponent::BeginPlay()
{
	Super::BeginPlay();
	auto owner = GetOwner();
	if(owner)
		owner->OnTakeAnyDamage.AddDynamic(this, &UActorHealthComponent::TakeDamage);
}

void UActorHealthComponent::TakeDamage(AActor* DamagedActor, float Damage, const class UDamageType* DamageType, class AController* InstigatedBy, AActor* DamageCauser)
{
	if(isDead) return;
	
	health -= Damage;
	OnHit.Broadcast(Damage, DamageCauser);
	if (health <= 0 && canDie)
	{
		isDead = true;
		OnDeath.Broadcast();
	}
}




