#include "Gun/RecoilPatternTypeActions.h"

#include "Weapon/RecoilPattern.h"

FRecoilPatternTypeActions::FRecoilPatternTypeActions(EAssetTypeCategories::Type InAssetCategory) : assetCategory(InAssetCategory)
{
}

FText FRecoilPatternTypeActions::GetName() const
{
	return FText::FromString("Recoil Pattern");
}

FColor FRecoilPatternTypeActions::GetTypeColor() const
{
	return FColor(230, 205, 165);
}

UClass* FRecoilPatternTypeActions::GetSupportedClass() const
{
	return URecoilPattern::StaticClass();
}

uint32 FRecoilPatternTypeActions::GetCategories()
{
	return assetCategory;
}

