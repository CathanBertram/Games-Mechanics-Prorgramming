// Copyright Epic Games, Inc. All Rights Reserved.

#include "ShootingMechanic.h"
#include "ShootingMechanicStyle.h"
#include "ShootingMechanicCommands.h"
#include "LevelEditor.h"
#include "Widgets/Docking/SDockTab.h"
#include "Widgets/Layout/SBox.h"
#include "Widgets/Text/STextBlock.h"
#include "ToolMenus.h"

static const FName ShootingMechanicTabName("ShootingMechanic");

#define LOCTEXT_NAMESPACE "FShootingMechanicModule"

void FShootingMechanicModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
	
	FShootingMechanicStyle::Initialize();
	FShootingMechanicStyle::ReloadTextures();

	FShootingMechanicCommands::Register();
	
	PluginCommands = MakeShareable(new FUICommandList);

	PluginCommands->MapAction(
		FShootingMechanicCommands::Get().OpenPluginWindow,
		FExecuteAction::CreateRaw(this, &FShootingMechanicModule::PluginButtonClicked),
		FCanExecuteAction());

	UToolMenus::RegisterStartupCallback(FSimpleMulticastDelegate::FDelegate::CreateRaw(this, &FShootingMechanicModule::RegisterMenus));
	
	FGlobalTabmanager::Get()->RegisterNomadTabSpawner(ShootingMechanicTabName, FOnSpawnTab::CreateRaw(this, &FShootingMechanicModule::OnSpawnPluginTab))
		.SetDisplayName(LOCTEXT("FShootingMechanicTabTitle", "ShootingMechanic"))
		.SetMenuType(ETabSpawnerMenuType::Hidden);
}

void FShootingMechanicModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.

	UToolMenus::UnRegisterStartupCallback(this);

	UToolMenus::UnregisterOwner(this);

	FShootingMechanicStyle::Shutdown();

	FShootingMechanicCommands::Unregister();

	FGlobalTabmanager::Get()->UnregisterNomadTabSpawner(ShootingMechanicTabName);
}

TSharedRef<SDockTab> FShootingMechanicModule::OnSpawnPluginTab(const FSpawnTabArgs& SpawnTabArgs)
{
	FText WidgetText = FText::Format(
		LOCTEXT("WindowWidgetText", "Add code to {0} in {1} to override this window's contents"),
		FText::FromString(TEXT("FShootingMechanicModule::OnSpawnPluginTab")),
		FText::FromString(TEXT("ShootingMechanic.cpp"))
		);

	return SNew(SDockTab)
		.TabRole(ETabRole::NomadTab)
		[
			// Put your tab content here!
			SNew(SBox)
			.HAlign(HAlign_Center)
			.VAlign(VAlign_Center)
			[
				SNew(STextBlock)
				.Text(WidgetText)
			]
		];
}

void FShootingMechanicModule::PluginButtonClicked()
{
	FGlobalTabmanager::Get()->TryInvokeTab(ShootingMechanicTabName);
}

void FShootingMechanicModule::RegisterMenus()
{
	// Owner will be used for cleanup in call to UToolMenus::UnregisterOwner
	FToolMenuOwnerScoped OwnerScoped(this);

	{
		UToolMenu* Menu = UToolMenus::Get()->ExtendMenu("LevelEditor.MainMenu.Window");
		{
			FToolMenuSection& Section = Menu->FindOrAddSection("WindowLayout");
			Section.AddMenuEntryWithCommandList(FShootingMechanicCommands::Get().OpenPluginWindow, PluginCommands);
		}
	}

	{
		UToolMenu* ToolbarMenu = UToolMenus::Get()->ExtendMenu("LevelEditor.LevelEditorToolBar");
		{
			FToolMenuSection& Section = ToolbarMenu->FindOrAddSection("Settings");
			{
				FToolMenuEntry& Entry = Section.AddEntry(FToolMenuEntry::InitToolBarButton(FShootingMechanicCommands::Get().OpenPluginWindow));
				Entry.SetCommandList(PluginCommands);
			}
		}
	}
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FShootingMechanicModule, ShootingMechanic)