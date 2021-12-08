#pragma once
#include "SMWindowToolBase.h"

class WindowTool : public SMWindowToolBase
{
public:
	virtual ~WindowTool () {}
	virtual void OnStartModule() override;
	virtual void OnShutdownModule() override;
	virtual void Initialize() override;
	virtual TSharedRef<SDockTab> SpawnTab(const FSpawnTabArgs& TabSpawnArgs) override;
};
