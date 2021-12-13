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
	public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (MakeEditWidget))
	TArray<FVector2D> recoil;
	FVector2D GetRecoilAtIndex(int index);
	TArray<FVector2D> GetRecoil(){return recoil;}
	
	UFUNCTION(BlueprintCallable)
	void SetRecoil(TArray<FVector2D> newRecoil){recoil = newRecoil;}
};
