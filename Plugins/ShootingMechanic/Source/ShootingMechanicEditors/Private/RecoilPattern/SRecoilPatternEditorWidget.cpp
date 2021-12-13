// Fill out your copyright notice in the Description page of Project Settings.


#include "RecoilPattern/SRecoilPatternEditorWidget.h"

#include "EditorModeManager.h"
#include "FileHelpers.h"
#include "IContentBrowserSingleton.h"
#include "PropertyCustomizationHelpers.h"
#include "SAssetDropTarget.h"
#include "SlateOptMacros.h"
#include "PropertyEditor/Private/SDetailsView.h"
#include "RecoilPattern/RecoilPatternEditorMode.h"
#include "RecoilPattern/RecoilPatternEditorTool.h"
#include "RecoilPattern/RecoilPatternFactory.h"
#include "Widgets/Layout/SScrollBox.h"

BEGIN_SLATE_FUNCTION_BUILD_OPTIMIZATION

void SRecoilPatternEditorWidget::Construct(const FArguments& InArgs)
{
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
				SNew(SEditableText)
			]
			+ SHorizontalBox::Slot()
			.AutoWidth()
			.Padding(2, 0, 0, 0)
			.VAlign(VAlign_Center)
			[
				SNew(SButton)
				.Text(FText::FromString("Create New Recoil Pattern"))
				.OnClicked(this, &SRecoilPatternEditorWidget::CreateNewRecoilPattern)
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

void SRecoilPatternEditorWidget::OnSetRecoilPattern()
{
}

FReply SRecoilPatternEditorWidget::CreateNewRecoilPattern()
{
	GetEdMode()->CreateRecoilPattern(recoilPatternNameTextBox.GetText());
	return FReply::Handled();
}


END_SLATE_FUNCTION_BUILD_OPTIMIZATION
