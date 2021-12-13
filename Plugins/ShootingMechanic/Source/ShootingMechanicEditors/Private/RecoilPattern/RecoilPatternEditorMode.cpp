// Fill out your copyright notice in the Description page of Project Settings.


#include "RecoilPattern/RecoilPatternEditorMode.h"

#include "AssetToolsModule.h"
#include "EngineUtils.h"
#include "Editor/UnrealEd/Public/Toolkits/ToolkitManager.h"
#include "Engine/Selection.h"
#include "Kismet/GameplayStatics.h"
#include "RecoilPattern/RecoilPatternEditorModeToolkit.h"
#include "RecoilPattern/RecoilPatternFactory.h"


const FEditorModeID FRecoilPatternEditorMode::EM_Example(TEXT("EM_Example"));

class RecoilPatternEditorCommands : public TCommands<RecoilPatternEditorCommands>
{
public:
	RecoilPatternEditorCommands() : TCommands <RecoilPatternEditorCommands>
		(
			"RecoilPatternEditor",    // Context name for fast lookup
			FText::FromString(TEXT("Recoil Pattern Editor")),  // context name for displaying
			NAME_None,  // Parent
			FEditorStyle::GetStyleSetName()
			)
	{
	}

#define LOCTEXT_NAMESPACE ""
	virtual void RegisterCommands() override
	{
		UI_COMMAND(DeletePoint, "Delete Point", "Delete the currently selected point.", EUserInterfaceActionType::Button, FInputChord(EKeys::Delete));
		UI_COMMAND(AddPoint, "Add Point", "Add a new point.", EUserInterfaceActionType::Button, FInputChord(EKeys::Add));
	}
#undef LOCTEXT_NAMESPACE

public:
	TSharedPtr<FUICommandInfo> DeletePoint;
	TSharedPtr<FUICommandInfo> AddPoint;
};

FRecoilPatternEditorMode::FRecoilPatternEditorMode()
{
	RecoilPatternEditorCommands::Register();
	recoilPatternEditorModeActions = MakeShareable(new FUICommandList);
}

FRecoilPatternEditorMode::~FRecoilPatternEditorMode()
{
	RecoilPatternEditorCommands::Unregister();
}

void FRecoilPatternEditorMode::Enter()
{
	FEdMode::Enter();

	if (!Toolkit.IsValid())
	{
		Toolkit = MakeShareable(new FRecoilPatternEditorModeToolkit);
		Toolkit->Init(Owner->GetToolkitHost());
	}
	MapCommands();

	// reset
	currentSelectedTarget = nullptr;
	currentSelectedIndex = -1;
}

void FRecoilPatternEditorMode::Exit()
{
	FToolkitManager::Get().CloseToolkit(Toolkit.ToSharedRef());
	Toolkit.Reset();

	FEdMode::Exit();
}

ARecoilPatternTargetPoint* GetSelectedTargetPointActor()
{
	TArray<UObject*> selectedObjects;
	GEditor->GetSelectedActors()->GetSelectedObjects(selectedObjects);
	if (selectedObjects.Num() == 1)
	{
		return Cast<ARecoilPatternTargetPoint>(selectedObjects[0]);
	}
	return nullptr;
}

void FRecoilPatternEditorMode::AddPoint()
{
	ARecoilPatternTargetPoint* actor = GetSelectedTargetPointActor();
	if (actor)
	{
		const FScopedTransaction Transaction(FText::FromString("Add Point"));

		// add new point, slightly in front of camera
		FEditorViewportClient* client = (FEditorViewportClient*)GEditor->GetActiveViewport()->GetClient();
		
		FVector newPoint;
		if (actor->points.Num() > 0)
			 newPoint = actor->points[actor->points.Num()-1];
		else
			newPoint = FVector::ZeroVector;
		
		actor->Modify();
		actor->points.Add(newPoint);
		// auto select this new point
		SelectPoint(actor, actor->points.Num() - 1);
	}
}

void FRecoilPatternEditorMode::AddPoint(FVector pos)
{
	ARecoilPatternTargetPoint* actor = GetSelectedTargetPointActor();
	if (actor)
	{
		const FScopedTransaction Transaction(FText::FromString("Add Point"));

		// add new point, slightly in front of camera
		FEditorViewportClient* client = (FEditorViewportClient*)GEditor->GetActiveViewport()->GetClient();
		
		actor->Modify();
		actor->points.Add(pos);
		// auto select this new point
		SelectPoint(actor, actor->points.Num() - 1);
	}
}

bool FRecoilPatternEditorMode::CanAddPoint() const
{
	return GetSelectedTargetPointActor() != nullptr;
}

void FRecoilPatternEditorMode::RemovePoint()
{
	if (HasValidSelection())
	{
		const FScopedTransaction Transaction(FText::FromString("Remove Point"));

		currentSelectedTarget->Modify();
		currentSelectedTarget->points.RemoveAt(currentSelectedIndex);
		// deselect the point
		SelectPoint(GetSelectedTargetPointActor(), currentSelectedTarget->points.Num() - 1);
	}
}

bool FRecoilPatternEditorMode::CanRemovePoint() const
{
	return HasValidSelection();
}

bool FRecoilPatternEditorMode::HasValidSelection() const
{
	return currentSelectedTarget.IsValid() && currentSelectedIndex >= 0 && currentSelectedIndex < currentSelectedTarget->points.Num();
}

void FRecoilPatternEditorMode::SelectPoint(ARecoilPatternTargetPoint* actor, int32 index)
{
	currentSelectedTarget = actor;
	currentSelectedIndex = index;

	// select this actor only
	if (currentSelectedTarget.IsValid())
	{
		GEditor->SelectNone(true, true);
		GEditor->SelectActor(currentSelectedTarget.Get(), true, true);
	}
}

void FRecoilPatternEditorMode::SelectAsset()
{
	TArray<AActor*> actors;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), ARecoilPatternTargetPoint::StaticClass(), actors);

	if (actors.Num() > 0)
	{
		currentSelectedTarget = Cast<ARecoilPatternTargetPoint>(actors[0]);
		currentSelectedIndex = currentSelectedTarget->points.Num() - 1;
		// select this actor only
		if (currentSelectedTarget.IsValid())
		{
			GEditor->SelectNone(true, true);
			GEditor->SelectActor(currentSelectedTarget.Get(), true, true);
		}
	}
}

void FRecoilPatternEditorMode::ClearPoints()
{
	currentSelectedTarget->points.Empty();
}

bool FRecoilPatternEditorMode::InputDelta(FEditorViewportClient* InViewportClient, FViewport* InViewport,
                                          FVector& InDrag, FRotator& InRot, FVector& InScale)
{
	if (InViewportClient->GetCurrentWidgetAxis() == EAxisList::None)
	{
		return false;
	}

	if (HasValidSelection())
	{
		if (!InDrag.IsZero())
		{
			currentSelectedTarget->Modify();
			currentSelectedTarget->points[currentSelectedIndex] += InDrag;
			currentSelectedTarget->points[currentSelectedIndex].Y = 0;
		}
		return true;
	}

	return false;
}

bool FRecoilPatternEditorMode::ShowModeWidgets() const
{
	return true;
}

bool FRecoilPatternEditorMode::ShouldDrawWidget() const
{
	return true;
}

bool FRecoilPatternEditorMode::UsesTransformWidget() const
{
	return true;
}

FVector FRecoilPatternEditorMode::GetWidgetLocation() const
{
	if (HasValidSelection())
	{
		return currentSelectedTarget->points[currentSelectedIndex];
	}
	return FEdMode::GetWidgetLocation();
}

IMPLEMENT_HIT_PROXY(HRecoilPatternPointProxy, HHitProxy)

void FRecoilPatternEditorMode::Render(const FSceneView* View, FViewport* Viewport, FPrimitiveDrawInterface* PDI)
{
	const FColor normalColor(255, 0, 0);
	const FColor selectedColor(0, 255, 0);

	UWorld* World = GetWorld();
	PDI->DrawPoint(FVector::ZeroVector, FColor(0,0,255), 15.f, SDPG_Foreground);
	for (TActorIterator<ARecoilPatternTargetPoint> It(World); It; ++It)
	{
		ARecoilPatternTargetPoint* actor = (*It);
		if (actor)
		{
			FVector actorLoc = actor->GetActorLocation();
			for (int i = 0; i < actor->points.Num(); ++i)
			{
				bool bSelected = (actor == currentSelectedTarget && i == currentSelectedIndex);
				const FColor& color = bSelected ? selectedColor : normalColor;
				// set hit proxy and draw
				PDI->SetHitProxy(new HRecoilPatternPointProxy(actor, i));
				FVector t = actor->points[i];
				FVector lineEnd = actorLoc;
				if (i > 0)
				{
					lineEnd = actor->points[i-1];
				}
				
				PDI->DrawPoint(t, color, 15.f, SDPG_Foreground);
				PDI->DrawLine(t, lineEnd, color, SDPG_Foreground);
				PDI->SetHitProxy(NULL);
			}
		}
	}

	FEdMode::Render(View, Viewport, PDI);
}

bool FRecoilPatternEditorMode::HandleClick(FEditorViewportClient* InViewportClient, HHitProxy* HitProxy,
	const FViewportClick& Click)
{
	bool isHandled = false;

	if (HitProxy)
	{
		if (HitProxy->IsA(HRecoilPatternPointProxy::StaticGetType()))
		{
			isHandled = true;
			HRecoilPatternPointProxy* examplePointProxy = (HRecoilPatternPointProxy*)HitProxy;
			ARecoilPatternTargetPoint* actor = Cast<ARecoilPatternTargetPoint>(examplePointProxy->refObject);
			int32 index = examplePointProxy->index;
			if (actor && index >= 0 && index < actor->points.Num())
			{
				SelectPoint(actor, index);
			}
		}
	}

	if (HitProxy && isHandled && Click.GetKey() == EKeys::RightMouseButton)
	{
		TSharedPtr<SWidget> MenuWidget = GenerateContextMenu(InViewportClient);
		if (MenuWidget.IsValid())
		{
			FSlateApplication::Get().PushMenu(
				Owner->GetToolkitHost()->GetParentWidget(),
				FWidgetPath(),
				MenuWidget.ToSharedRef(),
				FSlateApplication::Get().GetCursorPos(),
				FPopupTransitionEffect(FPopupTransitionEffect::ContextMenu));
		}
	}

	return isHandled;
}

void FRecoilPatternEditorMode::MapCommands()
{
	const auto& Commands = RecoilPatternEditorCommands::Get();

	recoilPatternEditorModeActions->MapAction(
		Commands.DeletePoint,
		FExecuteAction::CreateSP(this, &FRecoilPatternEditorMode::RemovePoint),
		FCanExecuteAction::CreateSP(this, &FRecoilPatternEditorMode::CanRemovePoint));
	recoilPatternEditorModeActions->MapAction(
		Commands.AddPoint,
		FExecuteAction::CreateSP(this, &FRecoilPatternEditorMode::AddPoint),
		FCanExecuteAction::CreateSP(this, &FRecoilPatternEditorMode::CanAddPoint));
}

bool FRecoilPatternEditorMode::InputKey(FEditorViewportClient* ViewportClient, FViewport* Viewport, FKey Key, EInputEvent Event)
{
	bool isHandled = false;

	if (!isHandled && Event == IE_Pressed)
	{
		isHandled = recoilPatternEditorModeActions->ProcessCommandBindings(Key, FSlateApplication::Get().GetModifierKeys(), false);
	}

	return isHandled;
}

TSharedPtr<SWidget> FRecoilPatternEditorMode::GenerateContextMenu(FEditorViewportClient* InViewportClient) const
{
	FMenuBuilder MenuBuilder(true, NULL);

	MenuBuilder.PushCommandList(recoilPatternEditorModeActions.ToSharedRef());
	MenuBuilder.BeginSection("Example Section");
	if (HasValidSelection())
	{
		// add label for point index
		TSharedRef<SWidget> LabelWidget =
			SNew(STextBlock)
			.Text(FText::FromString(FString::FromInt(currentSelectedIndex)))
			.ColorAndOpacity(FLinearColor::Green);
		MenuBuilder.AddWidget(LabelWidget, FText::FromString(TEXT("Point Index: ")));
		MenuBuilder.AddMenuSeparator();
		// add delete point entry
		MenuBuilder.AddMenuEntry(RecoilPatternEditorCommands::Get().DeletePoint);
		MenuBuilder.AddMenuEntry(RecoilPatternEditorCommands::Get().AddPoint);
	}
	MenuBuilder.EndSection();
	MenuBuilder.PopCommandList();

	TSharedPtr<SWidget> MenuWidget = MenuBuilder.MakeWidget();
	return MenuWidget;
}

void FRecoilPatternEditorMode::CreateRecoilPattern(FText text)
{
	URecoilPatternFactory* factory = NewObject<URecoilPatternFactory>();

	FAssetToolsModule& AssetToolsModule = FAssetToolsModule::GetModule();
	URecoilPattern* asset = Cast<URecoilPattern>(AssetToolsModule.Get().CreateAssetWithDialog(factory->GetSupportedClass(), factory));
	asset->SetRecoil(GetRecoilFromPoints());

	TArray<UObject*> ObjectsToSync;
	ObjectsToSync.Add(asset);
	GEditor->SyncBrowserToObjects(ObjectsToSync);
}

TArray<FVector2D> FRecoilPatternEditorMode::GetRecoilFromPoints()
{
	TArray<FVector2D> recoil;
	auto points = currentSelectedTarget->points;
	for (int i = 0; i < points.Num(); ++i)
	{
		FVector2D point = FVector2D::ZeroVector;
		for (int j = 0; j <= i; j++)
		{
			point += FVector2D(points[j].X * 0.01f, points[j].Z * 0.01f);
		}
	}
	return recoil;
}

void FRecoilPatternEditorMode::OnChangeSelectedRecoilPattern(URecoilPattern* recoilPattern)
{
	selectedRecoilPattern = recoilPattern;
	ClearPoints();
	auto recoil = selectedRecoilPattern->GetRecoil();

	for (int i = 0; i < recoil.Num(); ++i)
	{
		if (i == 0)
			AddPoint(FVector(recoil[i].X, 0, recoil[i].Y));
		else
		{
			AddPoint(FVector(recoil[i].X + currentSelectedTarget->points[i-1].X, 0, recoil[i].Y + currentSelectedTarget->points[i-1].Z));
		}
	}
	
}
