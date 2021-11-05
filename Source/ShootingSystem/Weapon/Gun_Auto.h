// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Gun.h"
#include "Gun_Auto.generated.h"

/**
 * 
 */
UCLASS()
class SHOOTINGSYSTEM_API AGun_Auto : public AGun
{
	GENERATED_BODY()
	AGun_Auto();

	bool isFiring;
	
	void FireRepeater();

	FTimerHandle repeatTimer;
	
public:
	virtual void FireStart_Implementation() override;
	virtual void FireRelease_Implementation() override;
	
};
