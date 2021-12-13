// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "Engine/TargetPoint.h"
#include "GameFramework/Actor.h"
#include "RecoilPatternTargetPoint.generated.h"

UCLASS()
class SHOOTINGMECHANICEDITORS_API ARecoilPatternTargetPoint : public ATargetPoint
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, Category = "Points")
	TArray<FVector> points;
};
