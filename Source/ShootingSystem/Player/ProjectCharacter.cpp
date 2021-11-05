// Fill out your copyright notice in the Description page of Project Settings.


#include "ProjectCharacter.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetSystemLibrary.h"
#include "ShootingSystem/Interfaces/Equippable.h"
#include "ShootingSystem/Interfaces/Fireable.h"
#include "ShootingSystem/Interfaces/Interactable.h"

AProjectCharacter::AProjectCharacter()
{
	m_BaseLookHorizontalRate = 45.f;
	m_BaseLookVerticalRate = 45.f;

	m_InteractRange = 300.f;
}

#pragma region Inputable_Interface

void AProjectCharacter::JumpPressed_Implementation()
{
	Jump();
}

void AProjectCharacter::JumpReleased_Implementation()
{
	StopJumping();
}

void AProjectCharacter::FirePressed_Implementation()
{
	Super::FirePress();
}

void AProjectCharacter::FireReleased_Implementation()
{
	Super::FireRelease();
}

void AProjectCharacter::ReloadPressed_Implementation()
{
	Super::ReloadPress();
}

void AProjectCharacter::InteractPressed_Implementation()
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


void AProjectCharacter::MoveVertical_Implementation(float value)
{
	if (value != 0.0)
		AddMovementInput(GetActorForwardVector(), value);
}

void AProjectCharacter::MoveHorizontal_Implementation(float value)
{
	if (value != 0.0)
		AddMovementInput(GetActorRightVector(), value);
}

void AProjectCharacter::LookVertical_Implementation(float value)
{
	if (value != 0.0)
		AddControllerPitchInput(value);
}

void AProjectCharacter::LookHorizontal_Implementation(float value)
{
	if (value != 0.0)
		AddControllerYawInput(value);
}

#pragma endregion

void AProjectCharacter::Init_Implementation()
{
	Super::Initialise();
}
