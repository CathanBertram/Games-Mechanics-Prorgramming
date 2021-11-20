// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

#include "ShootingSystemGamemode.h"
#include "GameFramework/GameModeBase.h"

#include "SystemGamemode.generated.h"

/**
 * 
 */
UCLASS()
class SHOOTINGSYSTEM_API ASystemGamemode : public AShootingSystemGamemode
{
	GENERATED_BODY()
	ASystemGamemode();
	
	virtual AActor* FindPlayerStart_Implementation(AController* Player, const FString& IncomingName) override;

	virtual void PostLogin(APlayerController* NewPlayer) override;
	virtual void Logout(AController* Exiting) override;

	protected:
	TArray<AActor*> playerStarts;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	TArray<AController*> playerControllers;

	virtual void BeginPlay() override;
};
