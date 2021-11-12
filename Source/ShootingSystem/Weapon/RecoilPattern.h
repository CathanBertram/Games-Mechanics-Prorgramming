// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "RecoilPattern.generated.h"

/**
 * 
 */
UCLASS()
class SHOOTINGSYSTEM_API URecoilPattern : public UDataAsset
{
	GENERATED_BODY()

	protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FVector2D> recoil;
	public:
	FVector2D GetRecoilAtIndex(int index);
};
