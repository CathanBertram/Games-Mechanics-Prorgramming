// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ShootingSystem/Interfaces/GetPlayerController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGetPlayerController() {}
// Cross Module References
	SHOOTINGSYSTEM_API UClass* Z_Construct_UClass_UGetPlayerController_NoRegister();
	SHOOTINGSYSTEM_API UClass* Z_Construct_UClass_UGetPlayerController();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_ShootingSystem();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(IGetPlayerController::execGetPlayerController)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(APlayerController**)Z_Param__Result=P_THIS->GetPlayerController_Implementation();
		P_NATIVE_END;
	}
	APlayerController* IGetPlayerController::GetPlayerController()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetPlayerController instead.");
		GetPlayerController_eventGetPlayerController_Parms Parms;
		return Parms.ReturnValue;
	}
	void UGetPlayerController::StaticRegisterNativesUGetPlayerController()
	{
		UClass* Class = UGetPlayerController::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetPlayerController", &IGetPlayerController::execGetPlayerController },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGetPlayerController_GetPlayerController_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGetPlayerController_GetPlayerController_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GetPlayerController_eventGetPlayerController_Parms, ReturnValue), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGetPlayerController_GetPlayerController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGetPlayerController_GetPlayerController_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGetPlayerController_GetPlayerController_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Interfaces/GetPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGetPlayerController_GetPlayerController_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGetPlayerController, nullptr, "GetPlayerController", nullptr, nullptr, sizeof(GetPlayerController_eventGetPlayerController_Parms), Z_Construct_UFunction_UGetPlayerController_GetPlayerController_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGetPlayerController_GetPlayerController_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGetPlayerController_GetPlayerController_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGetPlayerController_GetPlayerController_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGetPlayerController_GetPlayerController()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGetPlayerController_GetPlayerController_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UGetPlayerController_NoRegister()
	{
		return UGetPlayerController::StaticClass();
	}
	struct Z_Construct_UClass_UGetPlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGetPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_ShootingSystem,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGetPlayerController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGetPlayerController_GetPlayerController, "GetPlayerController" }, // 2380016263
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGetPlayerController_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Interfaces/GetPlayerController.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGetPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IGetPlayerController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGetPlayerController_Statics::ClassParams = {
		&UGetPlayerController::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UGetPlayerController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGetPlayerController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGetPlayerController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGetPlayerController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGetPlayerController, 1886718630);
	template<> SHOOTINGSYSTEM_API UClass* StaticClass<UGetPlayerController>()
	{
		return UGetPlayerController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGetPlayerController(Z_Construct_UClass_UGetPlayerController, &UGetPlayerController::StaticClass, TEXT("/Script/ShootingSystem"), TEXT("UGetPlayerController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGetPlayerController);
	static FName NAME_UGetPlayerController_GetPlayerController = FName(TEXT("GetPlayerController"));
	APlayerController* IGetPlayerController::Execute_GetPlayerController(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UGetPlayerController::StaticClass()));
		GetPlayerController_eventGetPlayerController_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UGetPlayerController_GetPlayerController);
		if (Func)
		{
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IGetPlayerController*)(O->GetNativeInterfaceAddress(UGetPlayerController::StaticClass())))
		{
			Parms.ReturnValue = I->GetPlayerController_Implementation();
		}
		return Parms.ReturnValue;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
