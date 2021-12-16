// Fill out your copyright notice in the Description page of Project Settings.


#include "RecoilPattern/SRecoilPatternEditorWidget.h"

#include "AITestsCommon.h"
#include "EditorModeManager.h"
#include "FileHelpers.h"
#include "IContentBrowserSingleton.h"
#include "PropertyCustomizationHelpers.h"
#include "SAssetDropTarget.h"
#include "SlateOptMacros.h"
#include "Components/SlateWrapperTypes.h"
#include "PropertyEditor/Private/SDetailsView.h"
#include "RecoilPattern/RecoilPatternEditorMode.h"
#include "RecoilPattern/RecoilPatternEditorTool.h"
#include "RecoilPattern/RecoilPatternFactory.h"
#include "Widgets/Layout/SScrollBox.h"

BEGIN_SLATE_FUNCTION_BUILD_OPTIMIZATION

void SRecoilPatternEditorWidget::Construct(const FArguments& InArgs)
{
	assetThumbnailPool = MakeShareable(new FAssetThumbnailPool(24));
	ChildSlot
	[
	SNew(SScrollBox)
	+ SScrollBox::Slot()
	.VAlign(VAlign_Top)
	.Padding(5.f)
	[
		SNew(SVerticalBox)
		+ SVerticalBox::Slot()
		.AutoHeight()
		.Padding(0.f, 5.f, 0.f, 0.f)
		[
			SNew(STextBlock)
			.Text(FText::FromString(TEXT("This is a editor mode example.")))
		]
		+ SVerticalBox::Slot()
		.AutoHeight()
		.Padding(0.f, 5.f, 0.f, 0.f)
		[
			SNew(SHorizontalBox)
			+ SHorizontalBox::Slot()
			.AutoWidth()
			.VAlign(VAlign_Center)
			.Padding(0, 0, 2, 0)
			[
				SNew(SButton)
				.Text(FText::FromString("Open RecoilPatternEditor Map"))
				.OnClicked(this, &SRecoilPatternEditorWidget::OnLoadMap)
			]
			+ SHorizontalBox::Slot()
			.AutoWidth()
			.VAlign(VAlign_Center)
			.Padding(0, 0, 2, 0)
			[
				SNew(SButton)
				.Text(FText::FromString("Select Asset"))
				.OnClicked(this, &SRecoilPatternEditorWidget::OnSelectAsset)
				.IsEnabled(this, &SRecoilPatternEditorWidget::CanSelectAsset)
			]
		]
		+ SVerticalBox::Slot()
		.AutoHeight()
		.Padding(0.f, 5.f, 0.f, 0.f)
		[
			SNew(SHorizontalBox)
			+ SHorizontalBox::Slot()
			.AutoWidth()
			.Padding(2, 0, 0, 0)
			.VAlign(VAlign_Center)
			[
				SNew(SButton)
				.Text(FText::FromString("Add"))
				.OnClicked(this, &SRecoilPatternEditorWidget::OnAddPoint)
				.IsEnabled(this, &SRecoilPatternEditorWidget::CanAddPoint)
			]
			+ SHorizontalBox::Slot()
			.AutoWidth()
			.VAlign(VAlign_Center)
			.Padding(0, 0, 2, 0)
			[
				SNew(SButton)
				.Text(FText::FromString("Remove"))
				.OnClicked(this, &SRecoilPatternEditorWidget::OnRemovePoint)
				.IsEnabled(this, &SRecoilPatternEditorWidget::CanRemovePoint)
			]
			+ SHorizontalBox::Slot()
			.AutoWidth()
			.VAlign(VAlign_Center)
			.Padding(0, 0, 2, 0)
			[
				SNew(SButton)
				.Text(FText::FromString("Clear All Points"))
				.OnClicked(this, &SRecoilPatternEditorWidget::OnClearAllPoints)
				.IsEnabled(this, &SRecoilPatternEditorWidget::CanRemovePoint)
			]
		]
		+ SVerticalBox::Slot()
		 .AutoHeight()
		 .Padding(0.f, 5.f, 0.f, 0.f)
		 [
			SNew(SObjectPropertyEntryBox)
			.AllowedClass(URecoilPattern::StaticClass())
			.AllowClear(true)
			.ObjectPath(this, &SRecoilPatternEditorWidget::GetPath)
			.OnObjectChanged(this, &SRecoilPatternEditorWidget::OnRecoilPatternSelected)
			.ThumbnailPool(assetThumbnailPool)
		]	
		+ SVerticalBox::Slot()
		.AutoHeight()
		.Padding(0.f, 5.f, 0.f, 0.f)
		[
			SNew(SHorizontalBox)
			+ SHorizontalBox::Slot()
			.AutoWidth()
			.Padding(2, 0, 0, 0)
			.VAlign(VAlign_Center)
			[
				SNew(SButton)
				.Text(FText::FromString("Toggle Point Selection"))
				.OnClicked(this, &SRecoilPatternEditorWidget::TogglePointSelection)
			]
		]
		+ SVerticalBox::Slot()
		.AutoHeight()
		.Padding(0.f, 5.f, 0.f, 0.f)
		[
			SNew(SHorizontalBox)
			+ SHorizontalBox::Slot()
			.AutoWidth()
			.Padding(2, 0, 0, 0)
			.VAlign(VAlign_Center)
			[
				SNew(SButton)
				.Text(FText::FromString("Create New Recoil Pattern"))
				.OnClicked(this, &SRecoilPatternEditorWidget::CreateNewRecoilPattern)
				.IsEnabled(this, &SRecoilPatternEditorWidget::CanAddPoint)
			]
			+ SHorizontalBox::Slot()
			.AutoWidth()
			.Padding(2, 0, 0, 0)
			.VAlign(VAlign_Center)
			[
				SNew(SButton)
				.Text(FText::FromString("Save Recoil Pattern"))
				.OnClicked(this, &SRecoilPatternEditorWidget::OnSaveAsset)
				.IsEnabled(this, &SRecoilPatternEditorWidget::CanSaveAsset)
			]
		]
	]
];
}

FRecoilPatternEditorMode* SRecoilPatternEditorWidget::GetEdMode() const
{
	return (FRecoilPatternEditorMode*)GLevelEditorModeTools().GetActiveMode(FRecoilPatternEditorMode::EM_Example);
}

FReply SRecoilPatternEditorWidget::OnAddPoint()
{
	GetEdMode()->AddPoint();
	return FReply::Handled();
}

bool SRecoilPatternEditorWidget::CanAddPoint() const
{
	return GetEdMode()->CanAddPoint();
}

FReply SRecoilPatternEditorWidget::OnRemovePoint()
{
	GetEdMode()->RemovePoint();
	return FReply::Handled();
}

bool SRecoilPatternEditorWidget::CanRemovePoint() const
{
	return GetEdMode()->CanRemovePoint();
}

FReply SRecoilPatternEditorWidget::OnClearAllPoints()
{
	GetEdMode()->ClearPoints();
	return FReply::Handled();
}

FReply SRecoilPatternEditorWidget::OnLoadMap()
{
	FEditorFileUtils::LoadMap(TEXT("/ShootingMechanic/Maps/RecoilPatternEditor.mapname"), false, true);
	return FReply::Handled();
}

FReply SRecoilPatternEditorWidget::OnSelectAsset()
{
	GetEdMode()->SelectAsset();
	return FReply::Handled();
}

bool SRecoilPatternEditorWidget::CanSelectAsset() const
{
	return !GetEdMode()->CanAddPoint();
}

FReply SRecoilPatternEditorWidget::OnSaveAsset()
{
	GetEdMode()->SaveAsset(Cast<URecoilPattern>(assetData.GetAsset()));
	return FReply::Handled();
}

bool SRecoilPatternEditorWidget::CanSaveAsset() const
{
	return assetData.IsValid();
}

FReply SRecoilPatternEditorWidget::CreateNewRecoilPattern()
{
	GetEdMode()->CreateRecoilPattern();
	return FReply::Handled();
}

FReply SRecoilPatternEditorWidget::TogglePointSelection()
{
	GetEdMode()->TogglePointSelection();
	return FReply::Handled();
}

FString SRecoilPatternEditorWidget::GetPath() const
{
	if (assetData.IsValid())
	{
		return assetData.ObjectPath.ToString();
	}
	return FString("");
}

void SRecoilPatternEditorWidget::OnRecoilPatternSelected(const FAssetData& AssetData)
{
	assetData = AssetData;
	GetEdMode()->OnChangeSelectedRecoilPattern(Cast<URecoilPattern>(assetData.GetAsset()));
}


END_SLATE_FUNCTION_BUILD_OPTIMIZATION
