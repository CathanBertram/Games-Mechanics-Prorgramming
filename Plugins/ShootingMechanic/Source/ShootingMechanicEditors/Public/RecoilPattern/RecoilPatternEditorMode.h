// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EdMode.h"
#include "IContentBrowserSingleton.h"
#include "RecoilPatternTargetPoint.h"
#include "Weapon/RecoilPattern.h"

struct HRecoilPatternPointProxy : public HHitProxy
{
	DECLARE_HIT_PROXY();

	HRecoilPatternPointProxy(UObject* inRefObject, int32 inIndex) : HHitProxy(HPP_UI), refObject(inRefObject), index(inIndex)
	{}
	UObject* refObject;
	int32 index;
};

class SHOOTINGMECHANICEDITORS_API FRecoilPatternEditorMode : public FEdMode
{
public:
	FRecoilPatternEditorMode();
	~FRecoilPatternEditorMode();
	
	const static FEditorModeID EM_Example;

	// FEdMode interface
	virtual void Enter() override;
	virtual void Exit() override;

	void AddPoint();
	void AddPoint(FVector pos);
	bool CanAddPoint() const;
	void RemovePoint();
	bool CanRemovePoint() const;
	bool HasValidSelection() const;
	void SelectPoint(ARecoilPatternTargetPoint* actor, int32 index);
	void SelectAsset();

	void ClearPoints();
	
	virtual bool InputDelta(FEditorViewportClient* InViewportClient, FViewport* InViewport, FVector& InDrag, FRotator& InRot, FVector& InScale) override;
	virtual bool ShowModeWidgets() const override;
	virtual bool ShouldDrawWidget() const override;
	virtual bool UsesTransformWidget() const override;
	virtual FVector GetWidgetLocation() const override;

	virtual void Render(const FSceneView* View, FViewport* Viewport, FPrimitiveDrawInterface* PDI) override;
	virtual bool HandleClick(FEditorViewportClient* InViewportClient, HHitProxy *HitProxy, const FViewportClick &Click) override;
	void ClickAddPoint();
	
	TSharedPtr<FUICommandList> recoilPatternEditorModeActions;
	virtual bool InputKey(FEditorViewportClient* ViewportClient, FViewport* Viewport, FKey Key, EInputEvent Event) override;
	void MapCommands();
	TSharedPtr<SWidget> GenerateContextMenu(FEditorViewportClient* InViewportClient) const;

	TWeakObjectPtr<ARecoilPatternTargetPoint> currentSelectedTarget;
	int32 currentSelectedIndex = -1;

	void CreateRecoilPattern();
	TArray<FVector2D> GetRecoilFromPoints();
	void OnChangeSelectedRecoilPattern(URecoilPattern* recoilPattern);
	URecoilPattern* selectedRecoilPattern;

	void TogglePointSelection();
	bool pointSelection = true;

	void SaveAsset(URecoilPattern* recoilPattern);
	
	float scale = 100;

};
