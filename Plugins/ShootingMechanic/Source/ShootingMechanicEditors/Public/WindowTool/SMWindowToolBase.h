#pragma once
#include "ISMModuleInterface.h"
#include "ShootingMechanicEditors.h"

class SMWindowToolBase : public ISMModuleListenerInterface, public TSharedFromThis<SMWindowToolBase>
{
public:
	virtual void OnStartModule() override
	{
		Initialize();
		FGlobalTabmanager::Get()->RegisterNomadTabSpawner(TabName, FOnSpawnTab::CreateRaw(this, &SMWindowToolBase::SpawnTab))
			.SetGroup(FShootingMechanicEditorsModule::Get().GetMenuRoot())
			.SetDisplayName(TabDisplayName)
			.SetTooltipText(ToolTipText);
	};

	virtual void OnShutdownModule() override
	{
		FGlobalTabmanager::Get()->UnregisterNomadTabSpawner(TabName);
	};

	// In this function set TabName/TabDisplayName/ToolTipText
	virtual void Initialize() {};
	virtual TSharedRef<SDockTab> SpawnTab(const FSpawnTabArgs& TabSpawnArgs) { return SNew(SDockTab); 
	};

	virtual void MakeMenuEntry(FMenuBuilder &menuBuilder)
	{
		FGlobalTabmanager::Get()->PopulateTabSpawnerMenu(menuBuilder, TabName);
	};
protected:
	FName TabName;
	FText TabDisplayName;
	FText ToolTipText;
};
