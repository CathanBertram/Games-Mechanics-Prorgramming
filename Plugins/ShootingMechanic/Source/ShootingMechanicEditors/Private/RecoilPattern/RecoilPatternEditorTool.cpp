

#define IMAGE_BRUSH(RelativePath, ...) FSlateImageBrush(StyleSet->RootToContentDir(RelativePath, TEXT(".png")), __VA_ARGS__)
#include "RecoilPattern/RecoilPatternEditorTool.h"

#include "RecoilPattern/RecoilPatternEditorMode.h"

TSharedPtr< FSlateStyleSet > RecoilPatternEditorTool::StyleSet = nullptr;

void RecoilPatternEditorTool::OnStartModule()
{
	RegisterStyleSet();
	RegisterEditorMode();
}

void RecoilPatternEditorTool::OnShutdownModule()
{
	UnregisterStyleSet();
	UnregisterEditorMode();
}

void RecoilPatternEditorTool::RegisterStyleSet()
{
	// Const icon sizes
	const FVector2D Icon20x20(20.0f, 20.0f);
	const FVector2D Icon40x40(40.0f, 40.0f);

	// Only register once
	if (StyleSet.IsValid())
	{
		return;
	}

	StyleSet = MakeShareable(new FSlateStyleSet("ExampleEdModeToolStyle"));
	StyleSet->SetContentRoot(FPaths::GameSourceDir() / TEXT("Content/EditorResources"));
	StyleSet->SetCoreContentRoot(FPaths::GameSourceDir() / TEXT("Content/EditorResources"));

	// Spline editor
	{
		StyleSet->Set("ExampleEdMode", new IMAGE_BRUSH(TEXT("IconExampleEditorMode"), Icon40x40));
		StyleSet->Set("ExampleEdMode.Small", new IMAGE_BRUSH(TEXT("IconExampleEditorMode"), Icon20x20));
	}

	FSlateStyleRegistry::RegisterSlateStyle(*StyleSet.Get());
}

void RecoilPatternEditorTool::UnregisterStyleSet()
{
	if (StyleSet.IsValid())
	{
		FSlateStyleRegistry::UnRegisterSlateStyle(*StyleSet.Get());
		ensure(StyleSet.IsUnique());
		StyleSet.Reset();
	}
}

void RecoilPatternEditorTool::RegisterEditorMode()
{
	FEditorModeRegistry::Get().RegisterMode<FRecoilPatternEditorMode>(
		FRecoilPatternEditorMode::EM_Example,
		FText::FromString("Example Editor Mode"),
		FSlateIcon(StyleSet->GetStyleSetName(), "ExampleEdMode", "ExampleEdMode.Small"),
		true, 500
		);
}

void RecoilPatternEditorTool::UnregisterEditorMode()
{
	FEditorModeRegistry::Get().UnregisterMode(FRecoilPatternEditorMode::EM_Example);
}

#undef IMAGE_BRUSH

