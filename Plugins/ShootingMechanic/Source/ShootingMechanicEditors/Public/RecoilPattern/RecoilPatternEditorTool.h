// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "WindowTool/SMWindowToolBase.h"

class SHOOTINGMECHANICEDITORS_API RecoilPatternEditorTool : public SMWindowToolBase
{
public:
	virtual void OnStartModule() override;
	virtual void OnShutdownModule() override;

	virtual ~RecoilPatternEditorTool() {}
private:
	static TSharedPtr< class FSlateStyleSet > StyleSet;

	void RegisterStyleSet();
	void UnregisterStyleSet();

	void RegisterEditorMode();
	void UnregisterEditorMode();

};
