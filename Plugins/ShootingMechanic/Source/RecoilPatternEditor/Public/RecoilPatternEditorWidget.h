// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blutility/Classes/EditorUtilityWidget.h"
#include "RecoilPatternEditorWidget.generated.h"

/**
 * 
 */
UCLASS()
class RECOILPATTERNEDITOR_API URecoilPatternEditorWidget : public UEditorUtilityWidget
{
	GENERATED_BODY()

	protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FVector2D> recoil;

	UFUNCTION(BlueprintCallable)
	void CreateRecoilPattern();
};
