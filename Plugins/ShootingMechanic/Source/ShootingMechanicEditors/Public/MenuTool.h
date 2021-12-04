#pragma once
#include "ISMModuleInterface.h"

class MenuTool : public ISMModuleListenerInterface, public TSharedFromThis<MenuTool>
{
public:
	virtual ~MenuTool() {}

	virtual void OnStartModule() override;
	virtual void OnShutdownModule() override;

	void MakeMenuEntry(FMenuBuilder &menuBuilder);

protected:
	TSharedPtr<FUICommandList> CommandList;

	void MapCommands();

	// UI Command functions
	void MenuCommand1();
};