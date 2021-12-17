// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "IAssetTypeActions.h"
#include "ISMModuleInterface.h"
#include "Modules/ModuleManager.h"
#include "UnrealEd.h"
#include "SlateExtras.h"
#include "Editor/LevelEditor/Public/LevelEditor.h"


class FShootingMechanicEditorsModule : public ISMModuleInterface
{
public:

	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;

	virtual void AddModuleListeners() override;

	static inline FShootingMechanicEditorsModule& Get()
	{
		return FModuleManager::LoadModuleChecked< FShootingMechanicEditorsModule >("ShootingMechanicEditors");
	}

	static inline bool IsAvailable()
	{
		return FModuleManager::Get().IsModuleLoaded("ShootingMechanicEditors");
	}

//Menu Things
public:
	void AddMenuExtension(const FMenuExtensionDelegate &extensionDelegate, FName extensionHook, const TSharedPtr<FUICommandList> &CommandList = NULL, EExtensionHook::Position position = EExtensionHook::Before);
	TSharedRef<FWorkspaceItem> GetMenuRoot() { return menuRoot; };

protected:
	TSharedPtr<FExtensibilityManager> levelEditorMenuExtensibilityManager;
	TSharedPtr<FExtender> menuExtender;

	static TSharedRef<FWorkspaceItem> menuRoot;

	TArray<TSharedPtr<IAssetTypeActions>> createdAssetTypeActions;
};
