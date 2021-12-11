// Copyright Epic Games, Inc. All Rights Reserved.

#include "ShootingMechanicEditors.h"

#include "AssetToolsModule.h"
#include "IAssetTools.h"
#include "LevelEditor.h"
#include "MenuTool.h"
#include "Gun/GunTypeActions.h"
#include "Gun/RecoilPatternTypeActions.h"
#include "WindowTool/WindowTool.h"

#define LOCTEXT_NAMESPACE "FShootingMechanicModule"


void FShootingMechanicEditorsModule::StartupModule()
{
	if (!IsRunningCommandlet())
	{
		FLevelEditorModule& levelEditorModule = FModuleManager::LoadModuleChecked<FLevelEditorModule>("LevelEditor");
		levelEditorMenuExtensibilityManager = levelEditorModule.GetMenuExtensibilityManager();
		menuExtender = MakeShareable(new FExtender);
		menuExtender->AddMenuBarExtension("Window", EExtensionHook::After, NULL, FMenuBarExtensionDelegate::CreateRaw(this, &FShootingMechanicEditorsModule::MakePulldownMenu));
		levelEditorMenuExtensibilityManager->AddExtender(menuExtender);


		IAssetTools& AssetTools = FModuleManager::LoadModuleChecked<FAssetToolsModule>("AssetTools").Get();
		// add custom category
		EAssetTypeCategories::Type gunCategory = AssetTools.RegisterAdvancedAssetCategory(FName(TEXT("ShootingMechanic")), FText::FromString("ShootingMechanic"));

		// register our custom asset with example category
		TSharedPtr<IAssetTypeActions> gunAction = MakeShareable(new FGunTypeActions(gunCategory));
		AssetTools.RegisterAssetTypeActions(gunAction.ToSharedRef());
		// saved it here for unregister later
		createdAssetTypeActions.Add(gunAction);
		
		TSharedPtr<IAssetTypeActions> recoilPatternAction = MakeShareable(new FRecoilPatternTypeActions(gunCategory));
		AssetTools.RegisterAssetTypeActions(recoilPatternAction.ToSharedRef());
		// saved it here for unregister later
		createdAssetTypeActions.Add(recoilPatternAction);
		
	}
	ISMModuleInterface::StartupModule();
}

void FShootingMechanicEditorsModule::ShutdownModule()
{
	// Unregister all the asset types that we registered
	if (FModuleManager::Get().IsModuleLoaded("AssetTools"))
	{
		IAssetTools& AssetTools = FModuleManager::GetModuleChecked<FAssetToolsModule>("AssetTools").Get();
		for (int32 i = 0; i < createdAssetTypeActions.Num(); ++i)
		{
			AssetTools.UnregisterAssetTypeActions(createdAssetTypeActions[i].ToSharedRef());
		}
	}
	createdAssetTypeActions.Empty();
	
	ISMModuleInterface::ShutdownModule();
}

void FShootingMechanicEditorsModule::AddModuleListeners()
{
	// add tools later
	ModuleListeners.Add(MakeShareable(new MenuTool));
	ModuleListeners.Add(MakeShareable(new WindowTool));
}

TSharedRef<FWorkspaceItem> FShootingMechanicEditorsModule::menuRoot = FWorkspaceItem::NewGroup(FText::FromString("Menu Root"));


void FShootingMechanicEditorsModule::AddMenuExtension(const FMenuExtensionDelegate &extensionDelegate, FName extensionHook, const TSharedPtr<FUICommandList> &CommandList, EExtensionHook::Position position)
{
	menuExtender->AddMenuExtension(extensionHook, position, CommandList, extensionDelegate);
}

void FShootingMechanicEditorsModule::MakePulldownMenu(FMenuBarBuilder &menuBuilder)
{
	menuBuilder.AddPullDownMenu(
		FText::FromString("Example"),
		FText::FromString("Open the Example menu"),
		FNewMenuDelegate::CreateRaw(this, &FShootingMechanicEditorsModule::FillPulldownMenu),
		"Example",
		FName(TEXT("ExampleMenu"))
	);
}

void FShootingMechanicEditorsModule::FillPulldownMenu(FMenuBuilder &menuBuilder)
{
	// just a frame for tools to fill in
	menuBuilder.BeginSection("ExampleSection", FText::FromString("Section 1"));
	menuBuilder.AddMenuSeparator(FName("Section_1"));
	menuBuilder.EndSection();

	menuBuilder.BeginSection("ExampleSection", FText::FromString("Section 2"));
	menuBuilder.AddMenuSeparator(FName("Section_2"));
	menuBuilder.EndSection();
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FShootingMechanicEditorsModule, ShootingMechanicEditors)