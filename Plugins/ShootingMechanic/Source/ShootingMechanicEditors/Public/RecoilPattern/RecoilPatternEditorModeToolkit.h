// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EditorModeManager.h"
#include "SRecoilPatternEditorWidget.h"
#include "GameFramework/Actor.h"

class SHOOTINGMECHANICEDITORS_API FRecoilPatternEditorModeToolkit : public FModeToolkit
{
public:
	FRecoilPatternEditorModeToolkit()
	{
		SAssignNew(RecoilPatternEditorWidget, SRecoilPatternEditorWidget);
	}

	/** IToolkit interface */
	virtual FName GetToolkitFName() const override { return FName("ExampleEdMode"); }
	virtual FText GetBaseToolkitName() const override { return NSLOCTEXT("BuilderModeToolkit", "DisplayName", "Builder"); }
	virtual class FEdMode* GetEditorMode() const override { return GLevelEditorModeTools().GetActiveMode(FRecoilPatternEditorMode::EM_Example); }
	virtual TSharedPtr<class SWidget> GetInlineContent() const override { return RecoilPatternEditorWidget; }

private:
	TSharedPtr<SRecoilPatternEditorWidget> RecoilPatternEditorWidget;
};
