// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ShootingSystem/StarterContent/ShootingSystemHUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShootingSystemHUD() {}
// Cross Module References
	SHOOTINGSYSTEM_API UClass* Z_Construct_UClass_AShootingSystemHUD_NoRegister();
	SHOOTINGSYSTEM_API UClass* Z_Construct_UClass_AShootingSystemHUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_ShootingSystem();
// End Cross Module References
	void AShootingSystemHUD::StaticRegisterNativesAShootingSystemHUD()
	{
	}
	UClass* Z_Construct_UClass_AShootingSystemHUD_NoRegister()
	{
		return AShootingSystemHUD::StaticClass();
	}
	struct Z_Construct_UClass_AShootingSystemHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AShootingSystemHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_ShootingSystem,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShootingSystemHUD_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "StarterContent/ShootingSystemHUD.h" },
		{ "ModuleRelativePath", "StarterContent/ShootingSystemHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AShootingSystemHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AShootingSystemHUD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AShootingSystemHUD_Statics::ClassParams = {
		&AShootingSystemHUD::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AShootingSystemHUD_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AShootingSystemHUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AShootingSystemHUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AShootingSystemHUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AShootingSystemHUD, 3015292543);
	template<> SHOOTINGSYSTEM_API UClass* StaticClass<AShootingSystemHUD>()
	{
		return AShootingSystemHUD::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AShootingSystemHUD(Z_Construct_UClass_AShootingSystemHUD, &AShootingSystemHUD::StaticClass, TEXT("/Script/ShootingSystem"), TEXT("AShootingSystemHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AShootingSystemHUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
