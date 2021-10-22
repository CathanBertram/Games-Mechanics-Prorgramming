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
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	SHOOTINGSYSTEM_API UClass* Z_Construct_UClass_UInitable_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AShootingSystemPlayerController::execInit)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Init_Implementation();
		P_NATIVE_END;
	}
	static FName NAME_AShootingSystemPlayerController_Init = FName(TEXT("Init"));
	void AShootingSystemPlayerController::Init()
	{
		ProcessEvent(FindFunctionChecked(NAME_AShootingSystemPlayerController_Init),NULL);
	}
	void AShootingSystemPlayerController::StaticRegisterNativesAShootingSystemPlayerController()
	{
		UClass* Class = AShootingSystemPlayerController::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Init", &AShootingSystemPlayerController::execInit },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AShootingSystemPlayerController_Init_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AShootingSystemPlayerController_Init_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Player/ShootingSystemPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AShootingSystemPlayerController_Init_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AShootingSystemPlayerController, nullptr, "Init", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AShootingSystemPlayerController_Init_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AShootingSystemPlayerController_Init_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AShootingSystemPlayerController_Init()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AShootingSystemPlayerController_Init_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AShootingSystemPlayerController_NoRegister()
	{
		return AShootingSystemPlayerController::StaticClass();
	}
	struct Z_Construct_UClass_AShootingSystemPlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_pawnToSpawn_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_pawnToSpawn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MouseHorizontalRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MouseHorizontalRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MouseVerticalRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MouseVerticalRate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AShootingSystemPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_ShootingSystem,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AShootingSystemPlayerController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AShootingSystemPlayerController_Init, "Init" }, // 3609775188
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShootingSystemPlayerController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Player/ShootingSystemPlayerController.h" },
		{ "ModuleRelativePath", "Player/ShootingSystemPlayerController.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShootingSystemPlayerController_Statics::NewProp_pawnToSpawn_MetaData[] = {
		{ "Category", "ShootingSystemPlayerController" },
		{ "ModuleRelativePath", "Player/ShootingSystemPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AShootingSystemPlayerController_Statics::NewProp_pawnToSpawn = { "pawnToSpawn", nullptr, (EPropertyFlags)0x0024080000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShootingSystemPlayerController, pawnToSpawn), Z_Construct_UClass_APawn_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AShootingSystemPlayerController_Statics::NewProp_pawnToSpawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShootingSystemPlayerController_Statics::NewProp_pawnToSpawn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShootingSystemPlayerController_Statics::NewProp_MouseHorizontalRate_MetaData[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Player/ShootingSystemPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AShootingSystemPlayerController_Statics::NewProp_MouseHorizontalRate = { "MouseHorizontalRate", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShootingSystemPlayerController, MouseHorizontalRate), METADATA_PARAMS(Z_Construct_UClass_AShootingSystemPlayerController_Statics::NewProp_MouseHorizontalRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShootingSystemPlayerController_Statics::NewProp_MouseHorizontalRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShootingSystemPlayerController_Statics::NewProp_MouseVerticalRate_MetaData[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Player/ShootingSystemPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AShootingSystemPlayerController_Statics::NewProp_MouseVerticalRate = { "MouseVerticalRate", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShootingSystemPlayerController, MouseVerticalRate), METADATA_PARAMS(Z_Construct_UClass_AShootingSystemPlayerController_Statics::NewProp_MouseVerticalRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShootingSystemPlayerController_Statics::NewProp_MouseVerticalRate_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AShootingSystemPlayerController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShootingSystemPlayerController_Statics::NewProp_pawnToSpawn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShootingSystemPlayerController_Statics::NewProp_MouseHorizontalRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShootingSystemPlayerController_Statics::NewProp_MouseVerticalRate,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AShootingSystemPlayerController_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UInitable_NoRegister, (int32)VTABLE_OFFSET(AShootingSystemPlayerController, IInitable), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AShootingSystemPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AShootingSystemPlayerController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AShootingSystemPlayerController_Statics::ClassParams = {
		&AShootingSystemPlayerController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AShootingSystemPlayerController_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AShootingSystemPlayerController_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
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
	IMPLEMENT_CLASS(AShootingSystemPlayerController, 3406461850);
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
