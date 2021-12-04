// Copyright Epic Games, Inc. All Rights Reserved.

#include "RecoilPatternEditor/Public/RecoilPatternEditor.h"

#define LOCTEXT_NAMESPACE "FRecoilPatternEditorModule"

void FRecoilPatternEditorModule::StartupModule()
{
}

void FRecoilPatternEditorModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
}


#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FRecoilPatternEditorModule, RecoilPatternEditor)