#pragma once

class  ISMModuleListenerInterface
{
public:
	virtual void OnStartModule() {};
	virtual void OnShutdownModule() {};
};

class ISMModuleInterface : public IModuleInterface
{
public:
	virtual void StartupModule() override
	{
		if (!IsRunningCommandlet())
		{
			AddModuleListeners();
			for (int32 i = 0; i < ModuleListeners.Num(); ++i)
			{
				ModuleListeners[i]->OnStartModule();
			}
		}
	}

	virtual void ShutdownModule() override
	{
		for (int32 i = 0; i < ModuleListeners.Num(); ++i)
		{
			ModuleListeners[i]->OnShutdownModule();
		}
	}

	virtual void AddModuleListeners() {};

protected:
	TArray<TSharedRef<ISMModuleListenerInterface>> ModuleListeners;
	
};
