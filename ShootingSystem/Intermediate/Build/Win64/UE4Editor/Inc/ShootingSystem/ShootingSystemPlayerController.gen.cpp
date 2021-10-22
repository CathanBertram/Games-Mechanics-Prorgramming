// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ShootingSystem/Player/ShootingSystemPlayerController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShootingSystemPlayerController() {}
// Cross Module References
	SHOOTINGSYSTEM_API UClass* Z_Construct_UClass_AShootingSystemPlayerController_NoRegister();
	SHOOTINGSYSTEM_API UClass* Z_Construct_UClass_AShootingSystemPlayerController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_ShootingSystem();
// End Cross Module References
	void AShootingSystemPlayerController::StaticRegisterNativesAShootingSystemPlayerController()
	{
	}
	UClass* Z_Construct_UClass_AShootingSystemPlayerController_NoRegister()
	{
		return AShootingSystemPlayerController::StaticClass();
	}
	struct Z_Construct_UClass_AShootingSystemPlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AShootingSystemPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_ShootingSystem,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShootingSystemPlayerController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Player/ShootingSystemPlayerController.h" },
		{ "ModuleRelativePath", "Player/ShootingSystemPlayerController.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AShootingSystemPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AShootingSystemPlayerController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AShootingSystemPlayerController_Statics::ClassParams = {
		&AShootingSystemPlayerController::StaticClass,
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
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AShootingSystemPlayerController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AShootingSystemPlayerController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AShootingSystemPlayerController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AShootingSystemPlayerController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AShootingSystemPlayerController, 1861911648);
	template<> SHOOTINGSYSTEM_API UClass* StaticClass<AShootingSystemPlayerController>()
	{
		return AShootingSystemPlayerController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AShootingSystemPlayerController(Z_Construct_UClass_AShootingSystemPlayerController, &AShootingSystemPlayerController::StaticClass, TEXT("/Script/ShootingSystem"), TEXT("AShootingSystemPlayerController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AShootingSystemPlayerController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
