// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "RecoilPattern.generated.h"

/**
 * 
 */
UCLASS()
class SHOOTINGMECHANIC_API URecoilPattern : public UPrimaryDataAsset
{
	GENERATED_BODY()
	
	protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FVector2D> recoil;
	public:
	FVector2D GetRecoilAtIndex(int index);
	UFUNCTION(BlueprintCallable)
	void SetRecoil(TArray<FVector2D> newRecoil){recoil = newRecoil;}
};
