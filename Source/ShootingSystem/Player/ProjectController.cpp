// Fill out your copyright notice in the Description page of Project Settings.


#include "ProjectController.h"


#include "GameFramework/GameModeBase.h"
#include "Kismet/GameplayStatics.h"
#include "ShootingSystem/Interfaces/Inputable.h"

AProjectController::AProjectController()
{
	MouseHorizontalRate = 1.f;
	MouseVerticalRate = 1.f;
}

void AProjectController::SetupInputComponent()
{
	Super::SetupInputComponent();

	InputComponent->BindAction("Jump", IE_Pressed, this, &AProjectController::JumpPressed);
	InputComponent->BindAction("Jump", IE_Released, this, &AProjectController::JumpReleased);
	InputComponent->BindAction("Fire", IE_Pressed, this, &AProjectController::FirePressed);
	InputComponent->BindAction("Fire", IE_Released, this, &AProjectController::FireReleased);
	InputComponent->BindAction("Interact", IE_Pressed, this, &AProjectController::InteractPressed);
	InputComponent->BindAction("Reload", IE_Pressed, this, &AProjectController::ReloadPressed);
	
	InputComponent->BindAxis("MoveVertical", this, &AProjectController::MoveVertical);
	InputComponent->BindAxis("MoveHorizontal", this, &AProjectController::MoveHorizontal);
	InputComponent->BindAxis("LookVertical", this, &AProjectController::LookVertical);
	InputComponent->BindAxis("LookHorizontal", this, &AProjectController::LookHorizontal);
}

void AProjectController::Init_Implementation()
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

void AProjectController::JumpPressed()
{
	auto pawn = GetPawn();
	if (UKismetSystemLibrary::DoesImplementInterface(pawn, UInputable::StaticClass()))
		IInputable::Execute_JumpPressed(pawn);
}

void AProjectController::JumpReleased()
{
	auto pawn = GetPawn();
	if (UKismetSystemLibrary::DoesImplementInterface(pawn, UInputable::StaticClass()))
		IInputable::Execute_JumpReleased(pawn);
}

void AProjectController::FirePressed()
{
	auto pawn = GetPawn();
	if (UKismetSystemLibrary::DoesImplementInterface(pawn, UInputable::StaticClass()))
		IInputable::Execute_FirePressed(pawn);
}

void AProjectController::FireReleased()
{
	auto pawn = GetPawn();
	if (UKismetSystemLibrary::DoesImplementInterface(pawn, UInputable::StaticClass()))
		IInputable::Execute_FireReleased(pawn);
}

void AProjectController::InteractPressed()
{
	auto pawn = GetPawn();
	if (UKismetSystemLibrary::DoesImplementInterface(pawn, UInputable::StaticClass()))
		IInputable::Execute_InteractPressed(pawn);
}

void AProjectController::ReloadPressed()
{
	auto pawn = GetPawn();
	if (UKismetSystemLibrary::DoesImplementInterface(pawn, UInputable::StaticClass()))
		IInputable::Execute_ReloadPressed(pawn);
}

void AProjectController::MoveVertical(float value)
{
	auto pawn = GetPawn();
	if (UKismetSystemLibrary::DoesImplementInterface(pawn, UInputable::StaticClass()))
		IInputable::Execute_MoveVertical(pawn, value);
}

void AProjectController::MoveHorizontal(float value)
{
	auto pawn = GetPawn();
	if (UKismetSystemLibrary::DoesImplementInterface(pawn, UInputable::StaticClass()))
		IInputable::Execute_MoveHorizontal(pawn, value);
}

void AProjectController::LookVertical(float value)
{
	auto pawn = GetPawn();
	if (UKismetSystemLibrary::DoesImplementInterface(pawn, UInputable::StaticClass()))
		IInputable::Execute_LookVertical(pawn, value);
}

void AProjectController::LookHorizontal(float value)
{
	auto pawn = GetPawn();
	if (UKismetSystemLibrary::DoesImplementInterface(pawn, UInputable::StaticClass()))
		IInputable::Execute_LookHorizontal(pawn, value);
}
