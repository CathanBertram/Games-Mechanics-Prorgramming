// Fill out your copyright notice in the Description page of Project Settings.


#include "ShootingSystemPlayerCharacter.h"

#include "Components/CapsuleComponent.h"
#include "Kismet/KismetSystemLibrary.h"
#include "ShootingSystem/Interfaces/Equippable.h"
#include "ShootingSystem/Interfaces/Fireable.h"
#include "ShootingSystem/Interfaces/GetGun.h"
#include "ShootingSystem/Weapon/Gun.h"

// Sets default values
AShootingSystemPlayerCharacter::AShootingSystemPlayerCharacter()
{
	GetCapsuleComponent()->InitCapsuleSize(55.f, 96.f);


	m_FPCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("FirstPersonCamera"));
	m_FPCameraComponent->SetupAttachment(GetCapsuleComponent());
	m_FPCameraComponent->SetRelativeLocation(FVector(-40.f, 2.f, 64.f));
	m_FPCameraComponent->bUsePawnControlRotation = true;

	m_GunChildActor = CreateDefaultSubobject<UChildActorComponent>(TEXT("GunSlot"));
	m_GunChildActor->SetupAttachment(m_FPCameraComponent);
	m_GunChildActor->CreateChildActor();
}

void AShootingSystemPlayerCharacter::Initialise()
{
	Super::BeginPlay();
	auto child = m_GunChildActor->GetChildActor();
	EquipGun(child);
}
void AShootingSystemPlayerCharacter::FirePressed()
{
	auto child = m_GunChildActor->GetChildActor();
	if (UKismetSystemLibrary::DoesImplementInterface(child, UFireable::StaticClass()))
	{
		IFireable::Execute_FireStart(child);
	}
}

void AShootingSystemPlayerCharacter::FireReleased()
{
	auto child = m_GunChildActor->GetChildActor();
	if (UKismetSystemLibrary::DoesImplementInterface(child, UFireable::StaticClass()))
	{
		IFireable::Execute_FireRelease(child);
	}
}

void AShootingSystemPlayerCharacter::OnShoot(float xRecoil, float yRecoil)
{
	AddControllerPitchInput(xRecoil);
	AddControllerYawInput(yRecoil);
}

void AShootingSystemPlayerCharacter::EquipGun(AActor* gunToEquip)
{
	auto child = m_GunChildActor->GetChildActor();
	if (child != nullptr)
		UnequipGun(child);
	
	if (UKismetSystemLibrary::DoesImplementInterface(gunToEquip, UEquippable::StaticClass()))
	{
		IEquippable::Execute_Equip(gunToEquip, m_FPCameraComponent);
	}

	if (UKismetSystemLibrary::DoesImplementInterface(gunToEquip, UGetGun::StaticClass()))
	{
		AGun* gun = IGetGun::Execute_GetGun(gunToEquip);
		gun->OnShoot.AddDynamic(this, &AShootingSystemPlayerCharacter::OnShoot);
	}
}

void AShootingSystemPlayerCharacter::UnequipGun(AActor* gunToUnequip)
{
	if (UKismetSystemLibrary::DoesImplementInterface(gunToUnequip, UGetGun::StaticClass()))
	{
		auto gun = IGetGun::Execute_GetGun(gunToUnequip);
		gun->OnShoot.RemoveDynamic(this, &AShootingSystemPlayerCharacter::OnShoot);
	}
}








