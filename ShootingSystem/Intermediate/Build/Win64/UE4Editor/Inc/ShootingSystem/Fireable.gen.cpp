// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ShootingSystem/Interfaces/Fireable.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFireable() {}
// Cross Module References
	SHOOTINGSYSTEM_API UClass* Z_Construct_UClass_UFireable_NoRegister();
	SHOOTINGSYSTEM_API UClass* Z_Construct_UClass_UFireable();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_ShootingSystem();
// End Cross Module References
	DEFINE_FUNCTION(IFireable::execFireRelease)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FireRelease_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IFireable::execFireStart)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FireStart_Implementation();
		P_NATIVE_END;
	}
	void IFireable::FireRelease()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_FireRelease instead.");
	}
	void IFireable::FireStart()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_FireStart instead.");
	}
	void UFireable::StaticRegisterNativesUFireable()
	{
		UClass* Class = UFireable::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FireRelease", &IFireable::execFireRelease },
			{ "FireStart", &IFireable::execFireStart },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFireable_FireRelease_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFireable_FireRelease_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Interfaces/Fireable.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFireable_FireRelease_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFireable, nullptr, "FireRelease", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFireable_FireRelease_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFireable_FireRelease_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFireable_FireRelease()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFireable_FireRelease_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFireable_FireStart_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFireable_FireStart_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Interfaces/Fireable.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFireable_FireStart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFireable, nullptr, "FireStart", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFireable_FireStart_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFireable_FireStart_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFireable_FireStart()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFireable_FireStart_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFireable_NoRegister()
	{
		return UFireable::StaticClass();
	}
	struct Z_Construct_UClass_UFireable_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFireable_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_ShootingSystem,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFireable_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFireable_FireRelease, "FireRelease" }, // 3473828371
		{ &Z_Construct_UFunction_UFireable_FireStart, "FireStart" }, // 150782122
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFireable_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Interfaces/Fireable.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFireable_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IFireable>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFireable_Statics::ClassParams = {
		&UFireable::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UFireable_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFireable_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFireable()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFireable_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFireable, 3607750970);
	template<> SHOOTINGSYSTEM_API UClass* StaticClass<UFireable>()
	{
		return UFireable::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFireable(Z_Construct_UClass_UFireable, &UFireable::StaticClass, TEXT("/Script/ShootingSystem"), TEXT("UFireable"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFireable);
	static FName NAME_UFireable_FireRelease = FName(TEXT("FireRelease"));
	void IFireable::Execute_FireRelease(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UFireable::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UFireable_FireRelease);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (IFireable*)(O->GetNativeInterfaceAddress(UFireable::StaticClass())))
		{
			I->FireRelease_Implementation();
		}
	}
	static FName NAME_UFireable_FireStart = FName(TEXT("FireStart"));
	void IFireable::Execute_FireStart(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UFireable::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UFireable_FireStart);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (IFireable*)(O->GetNativeInterfaceAddress(UFireable::StaticClass())))
		{
			I->FireStart_Implementation();
		}
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
