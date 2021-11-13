// Fill out your copyright notice in the Description page of Project Settings.


#include "ShootingSystemPlayerCharacter.h"

#include "Components/CapsuleComponent.h"
#include "Kismet/KismetSystemLibrary.h"
#include "ShootingSystem/Mechanic/Interfaces/Equippable.h"
#include "ShootingSystem/Mechanic/Interfaces/Fireable.h"
#include "ShootingSystem/Mechanic/Interfaces/Reloadable.h"
#include "ShootingSystem/Mechanic/Weapon/Gun.h"

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
void AShootingSystemPlayerCharacter::FirePress()
{
	auto child = m_GunChildActor->GetChildActor();
	if (UKismetSystemLibrary::DoesImplementInterface(child, UFireable::StaticClass()))
	{
		IFireable::Execute_FireStart(child);
	}
}

void AShootingSystemPlayerCharacter::FireRelease()
{
	auto child = m_GunChildActor->GetChildActor();
	if (UKismetSystemLibrary::DoesImplementInterface(child, UFireable::StaticClass()))
	{
		IFireable::Execute_FireRelease(child);
	}
}

void AShootingSystemPlayerCharacter::ReloadPress()
{
	auto child = m_GunChildActor->GetChildActor();
	if (UKismetSystemLibrary::DoesImplementInterface(child, UReloadable::StaticClass()))
	{
		IReloadable::Execute_Reload(child);
	}
}

void AShootingSystemPlayerCharacter::OnShoot(FVector2D recoil)
{
	AddControllerYawInput(recoil.X);
	AddControllerPitchInput(recoil.Y);
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








