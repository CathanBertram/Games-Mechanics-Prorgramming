// Fill out your copyright notice in the Description page of Project Settings.


#include "SystemGamemode.h"


#include "GameFramework/PlayerStart.h"
#include "Interfaces/Initable.h"
#include "Kismet/GameplayStatics.h"

ASystemGamemode::ASystemGamemode()
{
	
}

AActor* ASystemGamemode::FindPlayerStart_Implementation(AController* Player, const FString& IncomingName)
{
	if (playerStarts.Num() == 0)
	{
		UGameplayStatics::GetAllActorsOfClass(GetWorld(), APlayerStart::StaticClass(), playerStarts);
	}
	if (playerStarts.Num() > 0)
	{
		return playerStarts[0];
	}
	else
		return nullptr;
}

void ASystemGamemode::PostLogin(APlayerController* NewPlayer)
{
	playerControllers.AddUnique(NewPlayer);
	
	if (UKismetSystemLibrary::DoesImplementInterface(NewPlayer, UInitable::StaticClass()))
	{
		IInitable::Execute_Init(NewPlayer);
	}
	Super::PostLogin(NewPlayer);
}

void ASystemGamemode::Logout(AController* Exiting)
{
	playerControllers.Remove(Exiting);
	
	Super::Logout(Exiting);
}

void ASystemGamemode::BeginPlay()
{
	auto world = GetWorld();

	//Create Player Character
	UGameplayStatics::RemovePlayer(UGameplayStatics::GetPlayerController(world, 0), true);
	UGameplayStatics::CreatePlayer(world);
}
