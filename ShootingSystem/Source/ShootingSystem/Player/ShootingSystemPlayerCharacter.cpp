// Fill out your copyright notice in the Description page of Project Settings.


#include "ShootingSystemPlayerCharacter.h"

// Sets default values
AShootingSystemPlayerCharacter::AShootingSystemPlayerCharacter()
{
 	

}

// Called when the game starts or when spawned
void AShootingSystemPlayerCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}


// Called to bind functionality to input
void AShootingSystemPlayerCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void AShootingSystemPlayerCharacter::JumpPressed_Implementation()
{
}

void AShootingSystemPlayerCharacter::JumpReleased_Implementation()
{
}

void AShootingSystemPlayerCharacter::FirePressed_Implementation()
{
}

void AShootingSystemPlayerCharacter::FireReleased_Implementation()
{
}

void AShootingSystemPlayerCharacter::InteractPressed_Implementation()
{
}

void AShootingSystemPlayerCharacter::InteractReleased_Implementation()
{
}

void AShootingSystemPlayerCharacter::MoveVertical_Implementation(float value)
{
}

void AShootingSystemPlayerCharacter::MoveHorizontal_Implementation(float value)
{
}

void AShootingSystemPlayerCharacter::LookVertical_Implementation(float value)
{
}

void AShootingSystemPlayerCharacter::LookHorizontal_Implementation(float value)
{
}

void AShootingSystemPlayerCharacter::LookVerticalAtRate_Implementation(float rate)
{
}

void AShootingSystemPlayerCharacter::LookHorizontalAtRate_Implementation(float rate)
{
}

