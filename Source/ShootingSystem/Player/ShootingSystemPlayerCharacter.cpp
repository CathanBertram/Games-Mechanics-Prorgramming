// Fill out your copyright notice in the Description page of Project Settings.


#include "ShootingSystemPlayerCharacter.h"


#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetSystemLibrary.h"
#include "ShootingSystem/Interfaces/Fireable.h"
#include "ShootingSystem/Interfaces/GetPlayerController.h"
#include "ShootingSystem/Interfaces/Interactable.h"

// Sets default values
AShootingSystemPlayerCharacter::AShootingSystemPlayerCharacter()
{
 	GetCapsuleComponent()->InitCapsuleSize(55.f, 96.f);

	m_BaseLookHorizontalRate = 45.f;
	m_BaseLookVerticalRate = 45.f;

	m_InteractRange = 300.f;

	m_FPCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("FirstPersonCamera"));
	m_FPCameraComponent->SetupAttachment(GetCapsuleComponent());
	m_FPCameraComponent->SetRelativeLocation(FVector(-40.f, 2.f, 64.f));
	m_FPCameraComponent->bUsePawnControlRotation = true;

	m_GunChildActor = CreateDefaultSubobject<UChildActorComponent>(TEXT("GunSlot"));
	m_GunChildActor->SetupAttachment(m_FPCameraComponent);
	m_GunChildActor->CreateChildActor();
}

#pragma region Inputable_Interface

void AShootingSystemPlayerCharacter::JumpPressed_Implementation()
{
	Jump();
}

void AShootingSystemPlayerCharacter::JumpReleased_Implementation()
{
	StopJumping();
}

void AShootingSystemPlayerCharacter::FirePressed_Implementation()
{
	AActor* child = m_GunChildActor->GetChildActor();
	if (UKismetSystemLibrary::DoesImplementInterface(child, UFireable::StaticClass()))
	{
		IFireable::Execute_FireStart(child);
	}
}

void AShootingSystemPlayerCharacter::FireReleased_Implementation()
{
	AActor* child = m_GunChildActor->GetChildActor();
	if (UKismetSystemLibrary::DoesImplementInterface(child, UFireable::StaticClass()))
	{
		IFireable::Execute_FireRelease(child);
	}
}

void AShootingSystemPlayerCharacter::InteractPressed_Implementation()
{
	auto const world = GetWorld();
	if (world != nullptr)
	{
		FHitResult hit(ForceInit);
		auto start = m_FPCameraComponent->GetComponentLocation();
		auto forward = GetActorForwardVector();
		auto end = (forward * m_InteractRange) + start;

		FCollisionQueryParams collisionParams;

		if (world->LineTraceSingleByChannel(hit, start, end, ECC_Visibility, collisionParams))
		{
			if (UKismetSystemLibrary::DoesImplementInterface(hit.GetActor(), UInteractable::StaticClass()))
			{
				IInteractable::Execute_Interact(hit.GetActor());
			}
		}

	}
}


void AShootingSystemPlayerCharacter::MoveVertical_Implementation(float value)
{
	if (value != 0.0)
		AddMovementInput(GetActorForwardVector(), value);
}

void AShootingSystemPlayerCharacter::MoveHorizontal_Implementation(float value)
{
	if (value != 0.0)
		AddMovementInput(GetActorRightVector(), value);
}

void AShootingSystemPlayerCharacter::LookVertical_Implementation(float value)
{
	if (value != 0.0)
		AddControllerPitchInput(value);
}

void AShootingSystemPlayerCharacter::LookHorizontal_Implementation(float value)
{
	if (value != 0.0)
		AddControllerYawInput(value);
}

#pragma endregion

void AShootingSystemPlayerCharacter::Init_Implementation()
{
	Super::BeginPlay();
}
