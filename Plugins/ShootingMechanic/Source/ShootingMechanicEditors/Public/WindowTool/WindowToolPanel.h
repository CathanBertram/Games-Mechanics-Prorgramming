#pragma once

class WindowToolPanel : public SCompoundWidget
{
	SLATE_BEGIN_ARGS(WindowToolPanel)
	{}
	SLATE_ARGUMENT(TWeakPtr<class WindowTool>, Tool)
	SLATE_END_ARGS()

	void Construct(const FArguments& InArgs);

protected:
	TWeakPtr<WindowTool> tool;
};
