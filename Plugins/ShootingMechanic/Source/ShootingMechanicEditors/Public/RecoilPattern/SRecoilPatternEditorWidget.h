// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PropertyCustomizationHelpers.h"
#include "Weapon/RecoilPattern.h"
#include "Widgets/SCompoundWidget.h"

/**
 * 
 */
class SHOOTINGMECHANICEDITORS_API SRecoilPatternEditorWidget : public SCompoundWidget
{
public:
	SLATE_BEGIN_ARGS(SRecoilPatternEditorWidget)
		{
		}

	SLATE_END_ARGS()

	/** Constructs this widget with InArgs */
	void Construct(const FArguments& InArgs);

	class FRecoilPatternEditorMode* GetEdMode() const;
	
	FReply OnAddPoint();
	bool CanAddPoint() const;
	FReply OnRemovePoint();
	bool CanRemovePoint() const;
	FReply OnLoadMap();
	FReply OnSelectAsset();
	bool CanSelectAsset() const;

	void OnSetRecoilPattern();
	FReply CreateNewRecoilPattern();
	
	void OnTextChanged(const FText& NewText);
	FText recoilPatternName;
};
