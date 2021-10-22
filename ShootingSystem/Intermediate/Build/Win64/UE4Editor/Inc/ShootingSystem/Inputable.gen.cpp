// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ShootingSystem/Interfaces/Inputable.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInputable() {}
// Cross Module References
	SHOOTINGSYSTEM_API UClass* Z_Construct_UClass_UInputable_NoRegister();
	SHOOTINGSYSTEM_API UClass* Z_Construct_UClass_UInputable();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_ShootingSystem();
// End Cross Module References
	DEFINE_FUNCTION(IInputable::execLookHorizontal)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LookHorizontal_Implementation(Z_Param_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IInputable::execLookVertical)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LookVertical_Implementation(Z_Param_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IInputable::execMoveHorizontal)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MoveHorizontal_Implementation(Z_Param_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IInputable::execMoveVertical)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MoveVertical_Implementation(Z_Param_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IInputable::execInteractPressed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InteractPressed_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IInputable::execFireReleased)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FireReleased_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IInputable::execFirePressed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FirePressed_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IInputable::execJumpReleased)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->JumpReleased_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IInputable::execJumpPressed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->JumpPressed_Implementation();
		P_NATIVE_END;
	}
	void IInputable::FirePressed()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_FirePressed instead.");
	}
	void IInputable::FireReleased()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_FireReleased instead.");
	}
	void IInputable::InteractPressed()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_InteractPressed instead.");
	}
	void IInputable::JumpPressed()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_JumpPressed instead.");
	}
	void IInputable::JumpReleased()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_JumpReleased instead.");
	}
	void IInputable::LookHorizontal(float value)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_LookHorizontal instead.");
	}
	void IInputable::LookVertical(float value)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_LookVertical instead.");
	}
	void IInputable::MoveHorizontal(float value)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_MoveHorizontal instead.");
	}
	void IInputable::MoveVertical(float value)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_MoveVertical instead.");
	}
	void UInputable::StaticRegisterNativesUInputable()
	{
		UClass* Class = UInputable::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FirePressed", &IInputable::execFirePressed },
			{ "FireReleased", &IInputable::execFireReleased },
			{ "InteractPressed", &IInputable::execInteractPressed },
			{ "JumpPressed", &IInputable::execJumpPressed },
			{ "JumpReleased", &IInputable::execJumpReleased },
			{ "LookHorizontal", &IInputable::execLookHorizontal },
			{ "LookVertical", &IInputable::execLookVertical },
			{ "MoveHorizontal", &IInputable::execMoveHorizontal },
			{ "MoveVertical", &IInputable::execMoveVertical },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UInputable_FirePressed_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInputable_FirePressed_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Fire Functions\n" },
		{ "ModuleRelativePath", "Interfaces/Inputable.h" },
		{ "ToolTip", "Fire Functions" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInputable_FirePressed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputable, nullptr, "FirePressed", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInputable_FirePressed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputable_FirePressed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInputable_FirePressed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInputable_FirePressed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInputable_FireReleased_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInputable_FireReleased_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Interfaces/Inputable.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInputable_FireReleased_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputable, nullptr, "FireReleased", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInputable_FireReleased_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputable_FireReleased_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInputable_FireReleased()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInputable_FireReleased_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInputable_InteractPressed_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInputable_InteractPressed_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Interact Functions\n" },
		{ "ModuleRelativePath", "Interfaces/Inputable.h" },
		{ "ToolTip", "Interact Functions" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInputable_InteractPressed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputable, nullptr, "InteractPressed", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInputable_InteractPressed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputable_InteractPressed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInputable_InteractPressed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInputable_InteractPressed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInputable_JumpPressed_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInputable_JumpPressed_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Action Mappings\n//Jump Functions\n" },
		{ "ModuleRelativePath", "Interfaces/Inputable.h" },
		{ "ToolTip", "Action Mappings\nJump Functions" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInputable_JumpPressed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputable, nullptr, "JumpPressed", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInputable_JumpPressed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputable_JumpPressed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInputable_JumpPressed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInputable_JumpPressed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInputable_JumpReleased_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInputable_JumpReleased_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Interfaces/Inputable.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInputable_JumpReleased_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputable, nullptr, "JumpReleased", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInputable_JumpReleased_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputable_JumpReleased_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInputable_JumpReleased()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInputable_JumpReleased_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInputable_LookHorizontal_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInputable_LookHorizontal_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Inputable_eventLookHorizontal_Parms, value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInputable_LookHorizontal_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputable_LookHorizontal_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInputable_LookHorizontal_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Up/Down\n" },
		{ "ModuleRelativePath", "Interfaces/Inputable.h" },
		{ "ToolTip", "Up/Down" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInputable_LookHorizontal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputable, nullptr, "LookHorizontal", nullptr, nullptr, sizeof(Inputable_eventLookHorizontal_Parms), Z_Construct_UFunction_UInputable_LookHorizontal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputable_LookHorizontal_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInputable_LookHorizontal_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputable_LookHorizontal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInputable_LookHorizontal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInputable_LookHorizontal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInputable_LookVertical_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInputable_LookVertical_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Inputable_eventLookVertical_Parms, value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInputable_LookVertical_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputable_LookVertical_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInputable_LookVertical_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Look\n" },
		{ "ModuleRelativePath", "Interfaces/Inputable.h" },
		{ "ToolTip", "Look" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInputable_LookVertical_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputable, nullptr, "LookVertical", nullptr, nullptr, sizeof(Inputable_eventLookVertical_Parms), Z_Construct_UFunction_UInputable_LookVertical_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputable_LookVertical_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInputable_LookVertical_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputable_LookVertical_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInputable_LookVertical()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInputable_LookVertical_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInputable_MoveHorizontal_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInputable_MoveHorizontal_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Inputable_eventMoveHorizontal_Parms, value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInputable_MoveHorizontal_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputable_MoveHorizontal_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInputable_MoveHorizontal_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Forward/Backwards\n" },
		{ "ModuleRelativePath", "Interfaces/Inputable.h" },
		{ "ToolTip", "Forward/Backwards" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInputable_MoveHorizontal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputable, nullptr, "MoveHorizontal", nullptr, nullptr, sizeof(Inputable_eventMoveHorizontal_Parms), Z_Construct_UFunction_UInputable_MoveHorizontal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputable_MoveHorizontal_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInputable_MoveHorizontal_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputable_MoveHorizontal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInputable_MoveHorizontal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInputable_MoveHorizontal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInputable_MoveVertical_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInputable_MoveVertical_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Inputable_eventMoveVertical_Parms, value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInputable_MoveVertical_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputable_MoveVertical_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInputable_MoveVertical_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Axis Mappings\n//Move\n" },
		{ "ModuleRelativePath", "Interfaces/Inputable.h" },
		{ "ToolTip", "Axis Mappings\nMove" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInputable_MoveVertical_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputable, nullptr, "MoveVertical", nullptr, nullptr, sizeof(Inputable_eventMoveVertical_Parms), Z_Construct_UFunction_UInputable_MoveVertical_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputable_MoveVertical_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInputable_MoveVertical_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputable_MoveVertical_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInputable_MoveVertical()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInputable_MoveVertical_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UInputable_NoRegister()
	{
		return UInputable::StaticClass();
	}
	struct Z_Construct_UClass_UInputable_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInputable_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_ShootingSystem,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UInputable_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UInputable_FirePressed, "FirePressed" }, // 3328369063
		{ &Z_Construct_UFunction_UInputable_FireReleased, "FireReleased" }, // 2188871841
		{ &Z_Construct_UFunction_UInputable_InteractPressed, "InteractPressed" }, // 783586531
		{ &Z_Construct_UFunction_UInputable_JumpPressed, "JumpPressed" }, // 320435978
		{ &Z_Construct_UFunction_UInputable_JumpReleased, "JumpReleased" }, // 442075331
		{ &Z_Construct_UFunction_UInputable_LookHorizontal, "LookHorizontal" }, // 1048323037
		{ &Z_Construct_UFunction_UInputable_LookVertical, "LookVertical" }, // 3500612749
		{ &Z_Construct_UFunction_UInputable_MoveHorizontal, "MoveHorizontal" }, // 3598706332
		{ &Z_Construct_UFunction_UInputable_MoveVertical, "MoveVertical" }, // 2785474456
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputable_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Interfaces/Inputable.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInputable_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IInputable>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UInputable_Statics::ClassParams = {
		&UInputable::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UInputable_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInputable_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInputable()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UInputable_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UInputable, 1095287600);
	template<> SHOOTINGSYSTEM_API UClass* StaticClass<UInputable>()
	{
		return UInputable::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInputable(Z_Construct_UClass_UInputable, &UInputable::StaticClass, TEXT("/Script/ShootingSystem"), TEXT("UInputable"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInputable);
	static FName NAME_UInputable_FirePressed = FName(TEXT("FirePressed"));
	void IInputable::Execute_FirePressed(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UInputable::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UInputable_FirePressed);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (IInputable*)(O->GetNativeInterfaceAddress(UInputable::StaticClass())))
		{
			I->FirePressed_Implementation();
		}
	}
	static FName NAME_UInputable_FireReleased = FName(TEXT("FireReleased"));
	void IInputable::Execute_FireReleased(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UInputable::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UInputable_FireReleased);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (IInputable*)(O->GetNativeInterfaceAddress(UInputable::StaticClass())))
		{
			I->FireReleased_Implementation();
		}
	}
	static FName NAME_UInputable_InteractPressed = FName(TEXT("InteractPressed"));
	void IInputable::Execute_InteractPressed(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UInputable::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UInputable_InteractPressed);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (IInputable*)(O->GetNativeInterfaceAddress(UInputable::StaticClass())))
		{
			I->InteractPressed_Implementation();
		}
	}
	static FName NAME_UInputable_JumpPressed = FName(TEXT("JumpPressed"));
	void IInputable::Execute_JumpPressed(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UInputable::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UInputable_JumpPressed);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (IInputable*)(O->GetNativeInterfaceAddress(UInputable::StaticClass())))
		{
			I->JumpPressed_Implementation();
		}
	}
	static FName NAME_UInputable_JumpReleased = FName(TEXT("JumpReleased"));
	void IInputable::Execute_JumpReleased(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UInputable::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UInputable_JumpReleased);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (IInputable*)(O->GetNativeInterfaceAddress(UInputable::StaticClass())))
		{
			I->JumpReleased_Implementation();
		}
	}
	static FName NAME_UInputable_LookHorizontal = FName(TEXT("LookHorizontal"));
	void IInputable::Execute_LookHorizontal(UObject* O, float value)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UInputable::StaticClass()));
		Inputable_eventLookHorizontal_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UInputable_LookHorizontal);
		if (Func)
		{
			Parms.value=value;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IInputable*)(O->GetNativeInterfaceAddress(UInputable::StaticClass())))
		{
			I->LookHorizontal_Implementation(value);
		}
	}
	static FName NAME_UInputable_LookVertical = FName(TEXT("LookVertical"));
	void IInputable::Execute_LookVertical(UObject* O, float value)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UInputable::StaticClass()));
		Inputable_eventLookVertical_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UInputable_LookVertical);
		if (Func)
		{
			Parms.value=value;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IInputable*)(O->GetNativeInterfaceAddress(UInputable::StaticClass())))
		{
			I->LookVertical_Implementation(value);
		}
	}
	static FName NAME_UInputable_MoveHorizontal = FName(TEXT("MoveHorizontal"));
	void IInputable::Execute_MoveHorizontal(UObject* O, float value)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UInputable::StaticClass()));
		Inputable_eventMoveHorizontal_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UInputable_MoveHorizontal);
		if (Func)
		{
			Parms.value=value;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IInputable*)(O->GetNativeInterfaceAddress(UInputable::StaticClass())))
		{
			I->MoveHorizontal_Implementation(value);
		}
	}
	static FName NAME_UInputable_MoveVertical = FName(TEXT("MoveVertical"));
	void IInputable::Execute_MoveVertical(UObject* O, float value)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UInputable::StaticClass()));
		Inputable_eventMoveVertical_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UInputable_MoveVertical);
		if (Func)
		{
			Parms.value=value;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IInputable*)(O->GetNativeInterfaceAddress(UInputable::StaticClass())))
		{
			I->MoveVertical_Implementation(value);
		}
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
