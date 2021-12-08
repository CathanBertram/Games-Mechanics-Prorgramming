#include "WindowTool/WindowTool.h"
#include "WindowTool/WindowToolPanel.h"

void WindowTool::OnStartModule()
{
	SMWindowToolBase::OnStartModule();
	FShootingMechanicEditorsModule::Get().AddMenuExtension(FMenuExtensionDelegate::CreateRaw(this, &WindowTool::MakeMenuEntry), FName("Section_2"));
}

void WindowTool::OnShutdownModule()
{
	SMWindowToolBase::OnShutdownModule();
}

void WindowTool::Initialize()
{
	TabName = "TabTool";
	TabDisplayName = FText::FromString("Tab Tool");
	ToolTipText = FText::FromString("Tab Tool Window");
}

TSharedRef<SDockTab> WindowTool::SpawnTab(const FSpawnTabArgs& TabSpawnArgs)
{
	TSharedRef<SDockTab> SpawnedTab = SNew(SDockTab)
		.TabRole(ETabRole::NomadTab)
		[
			SNew(WindowToolPanel)
			.Tool(SharedThis(this))
		];

	return SpawnedTab;
}
