// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ShootingSystem/Player/ShootingSystemPlayerCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShootingSystemPlayerCharacter() {}
// Cross Module References
	SHOOTINGSYSTEM_API UClass* Z_Construct_UClass_AShootingSystemPlayerCharacter_NoRegister();
	SHOOTINGSYSTEM_API UClass* Z_Construct_UClass_AShootingSystemPlayerCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_ShootingSystem();
// End Cross Module References
	void AShootingSystemPlayerCharacter::StaticRegisterNativesAShootingSystemPlayerCharacter()
	{
	}
	UClass* Z_Construct_UClass_AShootingSystemPlayerCharacter_NoRegister()
	{
		return AShootingSystemPlayerCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AShootingSystemPlayerCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AShootingSystemPlayerCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_ShootingSystem,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShootingSystemPlayerCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Player/ShootingSystemPlayerCharacter.h" },
		{ "ModuleRelativePath", "Player/ShootingSystemPlayerCharacter.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AShootingSystemPlayerCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AShootingSystemPlayerCharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AShootingSystemPlayerCharacter_Statics::ClassParams = {
		&AShootingSystemPlayerCharacter::StaticClass,
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
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AShootingSystemPlayerCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AShootingSystemPlayerCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AShootingSystemPlayerCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AShootingSystemPlayerCharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AShootingSystemPlayerCharacter, 624412806);
	template<> SHOOTINGSYSTEM_API UClass* StaticClass<AShootingSystemPlayerCharacter>()
	{
		return AShootingSystemPlayerCharacter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AShootingSystemPlayerCharacter(Z_Construct_UClass_AShootingSystemPlayerCharacter, &AShootingSystemPlayerCharacter::StaticClass, TEXT("/Script/ShootingSystem"), TEXT("AShootingSystemPlayerCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AShootingSystemPlayerCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
