// Fill out your copyright notice in the Description page of Project Settings.


#include "ShootingSystemPlayerController.h"


#include "GameFramework/GameModeBase.h"
#include "Kismet/GameplayStatics.h"
#include "ShootingSystem/Interfaces/Inputable.h"

AShootingSystemPlayerController::AShootingSystemPlayerController()
{
	MouseHorizontalRate = 1.f;
	MouseVerticalRate = 1.f;
}

void AShootingSystemPlayerController::SetupInputComponent()
{
	Super::SetupInputComponent();

	InputComponent->BindAction("Jump", IE_Pressed, this, &AShootingSystemPlayerController::JumpPressed);
	InputComponent->BindAction("Jump", IE_Released, this, &AShootingSystemPlayerController::JumpReleased);
	InputComponent->BindAction("Fire", IE_Pressed, this, &AShootingSystemPlayerController::FirePressed);
	InputComponent->BindAction("Fire", IE_Released, this, &AShootingSystemPlayerController::FireReleased);
	InputComponent->BindAction("Interact", IE_Pressed, this, &AShootingSystemPlayerController::InteractPressed);
	
	InputComponent->BindAxis("MoveVertical", this, &AShootingSystemPlayerController::MoveVertical);
	InputComponent->BindAxis("MoveHorizontal", this, &AShootingSystemPlayerController::MoveHorizontal);
	InputComponent->BindAxis("LookVertical", this, &AShootingSystemPlayerController::LookVertical);
	InputComponent->BindAxis("LookHorizontal", this, &AShootingSystemPlayerController::LookHorizontal);
}

void AShootingSystemPlayerController::Init_Implementation()
{
	if (GetPawn() != nullptr)
	{
		GetPawn()->Destroy();
	}
	
	auto const world =  GetWorld();
	
	if (world != nullptr && pawnToSpawn)
	{
		AActor* tempStart = UGameplayStatics::GetGameMode(world)->FindPlayerStart(this);
		FVector spawnLocation = ((tempStart != nullptr) ? tempStart->GetActorLocation() : FVector::ZeroVector);
		FRotator spawnRotation = ((tempStart != nullptr) ? tempStart->GetActorRotation() : FRotator::ZeroRotator);

		FActorSpawnParameters actorSpawnParams;
		actorSpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButAlwaysSpawn;

		APawn* tempPawn = world->SpawnActor<APawn>(pawnToSpawn, spawnLocation, spawnRotation, actorSpawnParams);
		
		if (UKismetSystemLibrary::DoesImplementInterface(tempPawn, UInitable::StaticClass()))
		{
			IInitable::Execute_Init(tempPawn);
		}
		Possess(tempPawn);
	}
}

void AShootingSystemPlayerController::JumpPressed()
{
	auto pawn = GetPawn();
	if (UKismetSystemLibrary::DoesImplementInterface(pawn, UInputable::StaticClass()))
		IInputable::Execute_JumpPressed(pawn);
}

void AShootingSystemPlayerController::JumpReleased()
{
	auto pawn = GetPawn();
	if (UKismetSystemLibrary::DoesImplementInterface(pawn, UInputable::StaticClass()))
		IInputable::Execute_JumpReleased(pawn);
}

void AShootingSystemPlayerController::FirePressed()
{
	auto pawn = GetPawn();
	if (UKismetSystemLibrary::DoesImplementInterface(pawn, UInputable::StaticClass()))
		IInputable::Execute_FirePressed(pawn);
}

void AShootingSystemPlayerController::FireReleased()
{
	auto pawn = GetPawn();
	if (UKismetSystemLibrary::DoesImplementInterface(pawn, UInputable::StaticClass()))
		IInputable::Execute_FireReleased(pawn);
}

void AShootingSystemPlayerController::InteractPressed()
{
	auto pawn = GetPawn();
	if (UKismetSystemLibrary::DoesImplementInterface(pawn, UInputable::StaticClass()))
		IInputable::Execute_InteractPressed(pawn);
}

void AShootingSystemPlayerController::MoveVertical(float value)
{
	auto pawn = GetPawn();
	if (UKismetSystemLibrary::DoesImplementInterface(pawn, UInputable::StaticClass()))
		IInputable::Execute_MoveVertical(pawn, value);
}

void AShootingSystemPlayerController::MoveHorizontal(float value)
{
	auto pawn = GetPawn();
	if (UKismetSystemLibrary::DoesImplementInterface(pawn, UInputable::StaticClass()))
		IInputable::Execute_MoveHorizontal(pawn, value);
}

void AShootingSystemPlayerController::LookVertical(float value)
{
	auto pawn = GetPawn();
	if (UKismetSystemLibrary::DoesImplementInterface(pawn, UInputable::StaticClass()))
		IInputable::Execute_LookVertical(pawn, value);
}

void AShootingSystemPlayerController::LookHorizontal(float value)
{
	auto pawn = GetPawn();
	if (UKismetSystemLibrary::DoesImplementInterface(pawn, UInputable::StaticClass()))
		IInputable::Execute_LookHorizontal(pawn, value);
}
