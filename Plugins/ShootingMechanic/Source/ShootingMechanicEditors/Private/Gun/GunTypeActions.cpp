// Fill out your copyright notice in the Description page of Project Settings.


#include "Gun/GunTypeActions.h"

#include "Weapon/Gun.h"


FGunTypeActions::FGunTypeActions(EAssetTypeCategories::Type InAssetCategory) : assetCategory(InAssetCategory)
{
}

FText FGunTypeActions::GetName() const
{
	return FText::FromString("Gun");
}

FColor FGunTypeActions::GetTypeColor() const
{
	return FColor(230, 205, 165);
}

UClass* FGunTypeActions::GetSupportedClass() const
{
	return AGun::StaticClass();
}

uint32 FGunTypeActions::GetCategories()
{
	return assetCategory;
}
