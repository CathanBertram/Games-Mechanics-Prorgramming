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
	SHOOTINGSYSTEM_API UClass* Z_Construct_UClass_UInputable_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AShootingSystemPlayerCharacter::execLookHorizontalAtRate)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_rate);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LookHorizontalAtRate_Implementation(Z_Param_rate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AShootingSystemPlayerCharacter::execLookVerticalAtRate)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_rate);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LookVerticalAtRate_Implementation(Z_Param_rate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AShootingSystemPlayerCharacter::execLookHorizontal)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LookHorizontal_Implementation(Z_Param_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AShootingSystemPlayerCharacter::execLookVertical)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LookVertical_Implementation(Z_Param_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AShootingSystemPlayerCharacter::execMoveHorizontal)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MoveHorizontal_Implementation(Z_Param_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AShootingSystemPlayerCharacter::execMoveVertical)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MoveVertical_Implementation(Z_Param_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AShootingSystemPlayerCharacter::execInteractReleased)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InteractReleased_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AShootingSystemPlayerCharacter::execInteractPressed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InteractPressed_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AShootingSystemPlayerCharacter::execFireReleased)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FireReleased_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AShootingSystemPlayerCharacter::execFirePressed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FirePressed_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AShootingSystemPlayerCharacter::execJumpReleased)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->JumpReleased_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AShootingSystemPlayerCharacter::execJumpPressed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->JumpPressed_Implementation();
		P_NATIVE_END;
	}
	static FName NAME_AShootingSystemPlayerCharacter_FirePressed = FName(TEXT("FirePressed"));
	void AShootingSystemPlayerCharacter::FirePressed()
	{
		ProcessEvent(FindFunctionChecked(NAME_AShootingSystemPlayerCharacter_FirePressed),NULL);
	}
	static FName NAME_AShootingSystemPlayerCharacter_FireReleased = FName(TEXT("FireReleased"));
	void AShootingSystemPlayerCharacter::FireReleased()
	{
		ProcessEvent(FindFunctionChecked(NAME_AShootingSystemPlayerCharacter_FireReleased),NULL);
	}
	static FName NAME_AShootingSystemPlayerCharacter_InteractPressed = FName(TEXT("InteractPressed"));
	void AShootingSystemPlayerCharacter::InteractPressed()
	{
		ProcessEvent(FindFunctionChecked(NAME_AShootingSystemPlayerCharacter_InteractPressed),NULL);
	}
	static FName NAME_AShootingSystemPlayerCharacter_InteractReleased = FName(TEXT("InteractReleased"));
	void AShootingSystemPlayerCharacter::InteractReleased()
	{
		ProcessEvent(FindFunctionChecked(NAME_AShootingSystemPlayerCharacter_InteractReleased),NULL);
	}
	static FName NAME_AShootingSystemPlayerCharacter_JumpPressed = FName(TEXT("JumpPressed"));
	void AShootingSystemPlayerCharacter::JumpPressed()
	{
		ProcessEvent(FindFunctionChecked(NAME_AShootingSystemPlayerCharacter_JumpPressed),NULL);
	}
	static FName NAME_AShootingSystemPlayerCharacter_JumpReleased = FName(TEXT("JumpReleased"));
	void AShootingSystemPlayerCharacter::JumpReleased()
	{
		ProcessEvent(FindFunctionChecked(NAME_AShootingSystemPlayerCharacter_JumpReleased),NULL);
	}
	static FName NAME_AShootingSystemPlayerCharacter_LookHorizontal = FName(TEXT("LookHorizontal"));
	void AShootingSystemPlayerCharacter::LookHorizontal(float value)
	{
		ShootingSystemPlayerCharacter_eventLookHorizontal_Parms Parms;
		Parms.value=value;
		ProcessEvent(FindFunctionChecked(NAME_AShootingSystemPlayerCharacter_LookHorizontal),&Parms);
	}
	static FName NAME_AShootingSystemPlayerCharacter_LookHorizontalAtRate = FName(TEXT("LookHorizontalAtRate"));
	void AShootingSystemPlayerCharacter::LookHorizontalAtRate(float rate)
	{
		ShootingSystemPlayerCharacter_eventLookHorizontalAtRate_Parms Parms;
		Parms.rate=rate;
		ProcessEvent(FindFunctionChecked(NAME_AShootingSystemPlayerCharacter_LookHorizontalAtRate),&Parms);
	}
	static FName NAME_AShootingSystemPlayerCharacter_LookVertical = FName(TEXT("LookVertical"));
	void AShootingSystemPlayerCharacter::LookVertical(float value)
	{
		ShootingSystemPlayerCharacter_eventLookVertical_Parms Parms;
		Parms.value=value;
		ProcessEvent(FindFunctionChecked(NAME_AShootingSystemPlayerCharacter_LookVertical),&Parms);
	}
	static FName NAME_AShootingSystemPlayerCharacter_LookVerticalAtRate = FName(TEXT("LookVerticalAtRate"));
	void AShootingSystemPlayerCharacter::LookVerticalAtRate(float rate)
	{
		ShootingSystemPlayerCharacter_eventLookVerticalAtRate_Parms Parms;
		Parms.rate=rate;
		ProcessEvent(FindFunctionChecked(NAME_AShootingSystemPlayerCharacter_LookVerticalAtRate),&Parms);
	}
	static FName NAME_AShootingSystemPlayerCharacter_MoveHorizontal = FName(TEXT("MoveHorizontal"));
	void AShootingSystemPlayerCharacter::MoveHorizontal(float value)
	{
		ShootingSystemPlayerCharacter_eventMoveHorizontal_Parms Parms;
		Parms.value=value;
		ProcessEvent(FindFunctionChecked(NAME_AShootingSystemPlayerCharacter_MoveHorizontal),&Parms);
	}
	static FName NAME_AShootingSystemPlayerCharacter_MoveVertical = FName(TEXT("MoveVertical"));
	void AShootingSystemPlayerCharacter::MoveVertical(float value)
	{
		ShootingSystemPlayerCharacter_eventMoveVertical_Parms Parms;
		Parms.value=value;
		ProcessEvent(FindFunctionChecked(NAME_AShootingSystemPlayerCharacter_MoveVertical),&Parms);
	}
	void AShootingSystemPlayerCharacter::StaticRegisterNativesAShootingSystemPlayerCharacter()
	{
		UClass* Class = AShootingSystemPlayerCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FirePressed", &AShootingSystemPlayerCharacter::execFirePressed },
			{ "FireReleased", &AShootingSystemPlayerCharacter::execFireReleased },
			{ "InteractPressed", &AShootingSystemPlayerCharacter::execInteractPressed },
			{ "InteractReleased", &AShootingSystemPlayerCharacter::execInteractReleased },
			{ "JumpPressed", &AShootingSystemPlayerCharacter::execJumpPressed },
			{ "JumpReleased", &AShootingSystemPlayerCharacter::execJumpReleased },
			{ "LookHorizontal", &AShootingSystemPlayerCharacter::execLookHorizontal },
			{ "LookHorizontalAtRate", &AShootingSystemPlayerCharacter::execLookHorizontalAtRate },
			{ "LookVertical", &AShootingSystemPlayerCharacter::execLookVertical },
			{ "LookVerticalAtRate", &AShootingSystemPlayerCharacter::execLookVerticalAtRate },
			{ "MoveHorizontal", &AShootingSystemPlayerCharacter::execMoveHorizontal },
			{ "MoveVertical", &AShootingSystemPlayerCharacter::execMoveVertical },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AShootingSystemPlayerCharacter_FirePressed_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AShootingSystemPlayerCharacter_FirePressed_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Fire\n" },
		{ "ModuleRelativePath", "Player/ShootingSystemPlayerCharacter.h" },
		{ "ToolTip", "Fire" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AShootingSystemPlayerCharacter_FirePressed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AShootingSystemPlayerCharacter, nullptr, "FirePressed", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AShootingSystemPlayerCharacter_FirePressed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AShootingSystemPlayerCharacter_FirePressed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AShootingSystemPlayerCharacter_FirePressed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AShootingSystemPlayerCharacter_FirePressed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AShootingSystemPlayerCharacter_FireReleased_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AShootingSystemPlayerCharacter_FireReleased_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Player/ShootingSystemPlayerCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AShootingSystemPlayerCharacter_FireReleased_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AShootingSystemPlayerCharacter, nullptr, "FireReleased", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AShootingSystemPlayerCharacter_FireReleased_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AShootingSystemPlayerCharacter_FireReleased_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AShootingSystemPlayerCharacter_FireReleased()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AShootingSystemPlayerCharacter_FireReleased_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AShootingSystemPlayerCharacter_InteractPressed_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AShootingSystemPlayerCharacter_InteractPressed_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Interact\n" },
		{ "ModuleRelativePath", "Player/ShootingSystemPlayerCharacter.h" },
		{ "ToolTip", "Interact" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AShootingSystemPlayerCharacter_InteractPressed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AShootingSystemPlayerCharacter, nullptr, "InteractPressed", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AShootingSystemPlayerCharacter_InteractPressed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AShootingSystemPlayerCharacter_InteractPressed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AShootingSystemPlayerCharacter_InteractPressed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AShootingSystemPlayerCharacter_InteractPressed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AShootingSystemPlayerCharacter_InteractReleased_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AShootingSystemPlayerCharacter_InteractReleased_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Player/ShootingSystemPlayerCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AShootingSystemPlayerCharacter_InteractReleased_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AShootingSystemPlayerCharacter, nullptr, "InteractReleased", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AShootingSystemPlayerCharacter_InteractReleased_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AShootingSystemPlayerCharacter_InteractReleased_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AShootingSystemPlayerCharacter_InteractReleased()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AShootingSystemPlayerCharacter_InteractReleased_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AShootingSystemPlayerCharacter_JumpPressed_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AShootingSystemPlayerCharacter_JumpPressed_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Action Mappings\n//Jump\n" },
		{ "ModuleRelativePath", "Player/ShootingSystemPlayerCharacter.h" },
		{ "ToolTip", "Action Mappings\nJump" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AShootingSystemPlayerCharacter_JumpPressed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AShootingSystemPlayerCharacter, nullptr, "JumpPressed", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AShootingSystemPlayerCharacter_JumpPressed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AShootingSystemPlayerCharacter_JumpPressed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AShootingSystemPlayerCharacter_JumpPressed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AShootingSystemPlayerCharacter_JumpPressed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AShootingSystemPlayerCharacter_JumpReleased_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AShootingSystemPlayerCharacter_JumpReleased_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Player/ShootingSystemPlayerCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AShootingSystemPlayerCharacter_JumpReleased_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AShootingSystemPlayerCharacter, nullptr, "JumpReleased", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AShootingSystemPlayerCharacter_JumpReleased_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AShootingSystemPlayerCharacter_JumpReleased_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AShootingSystemPlayerCharacter_JumpReleased()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AShootingSystemPlayerCharacter_JumpReleased_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AShootingSystemPlayerCharacter_LookHorizontal_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AShootingSystemPlayerCharacter_LookHorizontal_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ShootingSystemPlayerCharacter_eventLookHorizontal_Parms, value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AShootingSystemPlayerCharacter_LookHorizontal_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AShootingSystemPlayerCharacter_LookHorizontal_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AShootingSystemPlayerCharacter_LookHorizontal_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Player/ShootingSystemPlayerCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AShootingSystemPlayerCharacter_LookHorizontal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AShootingSystemPlayerCharacter, nullptr, "LookHorizontal", nullptr, nullptr, sizeof(ShootingSystemPlayerCharacter_eventLookHorizontal_Parms), Z_Construct_UFunction_AShootingSystemPlayerCharacter_LookHorizontal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AShootingSystemPlayerCharacter_LookHorizontal_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AShootingSystemPlayerCharacter_LookHorizontal_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AShootingSystemPlayerCharacter_LookHorizontal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AShootingSystemPlayerCharacter_LookHorizontal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AShootingSystemPlayerCharacter_LookHorizontal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AShootingSystemPlayerCharacter_LookHorizontalAtRate_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_rate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AShootingSystemPlayerCharacter_LookHorizontalAtRate_Statics::NewProp_rate = { "rate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ShootingSystemPlayerCharacter_eventLookHorizontalAtRate_Parms, rate), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AShootingSystemPlayerCharacter_LookHorizontalAtRate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AShootingSystemPlayerCharacter_LookHorizontalAtRate_Statics::NewProp_rate,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AShootingSystemPlayerCharacter_LookHorizontalAtRate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Player/ShootingSystemPlayerCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AShootingSystemPlayerCharacter_LookHorizontalAtRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AShootingSystemPlayerCharacter, nullptr, "LookHorizontalAtRate", nullptr, nullptr, sizeof(ShootingSystemPlayerCharacter_eventLookHorizontalAtRate_Parms), Z_Construct_UFunction_AShootingSystemPlayerCharacter_LookHorizontalAtRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AShootingSystemPlayerCharacter_LookHorizontalAtRate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AShootingSystemPlayerCharacter_LookHorizontalAtRate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AShootingSystemPlayerCharacter_LookHorizontalAtRate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AShootingSystemPlayerCharacter_LookHorizontalAtRate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AShootingSystemPlayerCharacter_LookHorizontalAtRate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AShootingSystemPlayerCharacter_LookVertical_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AShootingSystemPlayerCharacter_LookVertical_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ShootingSystemPlayerCharacter_eventLookVertical_Parms, value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AShootingSystemPlayerCharacter_LookVertical_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AShootingSystemPlayerCharacter_LookVertical_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AShootingSystemPlayerCharacter_LookVertical_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Player/ShootingSystemPlayerCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AShootingSystemPlayerCharacter_LookVertical_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AShootingSystemPlayerCharacter, nullptr, "LookVertical", nullptr, nullptr, sizeof(ShootingSystemPlayerCharacter_eventLookVertical_Parms), Z_Construct_UFunction_AShootingSystemPlayerCharacter_LookVertical_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AShootingSystemPlayerCharacter_LookVertical_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AShootingSystemPlayerCharacter_LookVertical_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AShootingSystemPlayerCharacter_LookVertical_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AShootingSystemPlayerCharacter_LookVertical()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AShootingSystemPlayerCharacter_LookVertical_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AShootingSystemPlayerCharacter_LookVerticalAtRate_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_rate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AShootingSystemPlayerCharacter_LookVerticalAtRate_Statics::NewProp_rate = { "rate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ShootingSystemPlayerCharacter_eventLookVerticalAtRate_Parms, rate), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AShootingSystemPlayerCharacter_LookVerticalAtRate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AShootingSystemPlayerCharacter_LookVerticalAtRate_Statics::NewProp_rate,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AShootingSystemPlayerCharacter_LookVerticalAtRate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Player/ShootingSystemPlayerCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AShootingSystemPlayerCharacter_LookVerticalAtRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AShootingSystemPlayerCharacter, nullptr, "LookVerticalAtRate", nullptr, nullptr, sizeof(ShootingSystemPlayerCharacter_eventLookVerticalAtRate_Parms), Z_Construct_UFunction_AShootingSystemPlayerCharacter_LookVerticalAtRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AShootingSystemPlayerCharacter_LookVerticalAtRate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AShootingSystemPlayerCharacter_LookVerticalAtRate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AShootingSystemPlayerCharacter_LookVerticalAtRate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AShootingSystemPlayerCharacter_LookVerticalAtRate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AShootingSystemPlayerCharacter_LookVerticalAtRate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AShootingSystemPlayerCharacter_MoveHorizontal_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AShootingSystemPlayerCharacter_MoveHorizontal_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ShootingSystemPlayerCharacter_eventMoveHorizontal_Parms, value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AShootingSystemPlayerCharacter_MoveHorizontal_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AShootingSystemPlayerCharacter_MoveHorizontal_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AShootingSystemPlayerCharacter_MoveHorizontal_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Player/ShootingSystemPlayerCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AShootingSystemPlayerCharacter_MoveHorizontal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AShootingSystemPlayerCharacter, nullptr, "MoveHorizontal", nullptr, nullptr, sizeof(ShootingSystemPlayerCharacter_eventMoveHorizontal_Parms), Z_Construct_UFunction_AShootingSystemPlayerCharacter_MoveHorizontal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AShootingSystemPlayerCharacter_MoveHorizontal_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AShootingSystemPlayerCharacter_MoveHorizontal_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AShootingSystemPlayerCharacter_MoveHorizontal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AShootingSystemPlayerCharacter_MoveHorizontal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AShootingSystemPlayerCharacter_MoveHorizontal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AShootingSystemPlayerCharacter_MoveVertical_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AShootingSystemPlayerCharacter_MoveVertical_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ShootingSystemPlayerCharacter_eventMoveVertical_Parms, value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AShootingSystemPlayerCharacter_MoveVertical_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AShootingSystemPlayerCharacter_MoveVertical_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AShootingSystemPlayerCharacter_MoveVertical_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Axis Mappings\n" },
		{ "ModuleRelativePath", "Player/ShootingSystemPlayerCharacter.h" },
		{ "ToolTip", "Axis Mappings" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AShootingSystemPlayerCharacter_MoveVertical_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AShootingSystemPlayerCharacter, nullptr, "MoveVertical", nullptr, nullptr, sizeof(ShootingSystemPlayerCharacter_eventMoveVertical_Parms), Z_Construct_UFunction_AShootingSystemPlayerCharacter_MoveVertical_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AShootingSystemPlayerCharacter_MoveVertical_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AShootingSystemPlayerCharacter_MoveVertical_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AShootingSystemPlayerCharacter_MoveVertical_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AShootingSystemPlayerCharacter_MoveVertical()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AShootingSystemPlayerCharacter_MoveVertical_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AShootingSystemPlayerCharacter_NoRegister()
	{
		return AShootingSystemPlayerCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AShootingSystemPlayerCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AShootingSystemPlayerCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_ShootingSystem,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AShootingSystemPlayerCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AShootingSystemPlayerCharacter_FirePressed, "FirePressed" }, // 3705111706
		{ &Z_Construct_UFunction_AShootingSystemPlayerCharacter_FireReleased, "FireReleased" }, // 966617142
		{ &Z_Construct_UFunction_AShootingSystemPlayerCharacter_InteractPressed, "InteractPressed" }, // 3399287510
		{ &Z_Construct_UFunction_AShootingSystemPlayerCharacter_InteractReleased, "InteractReleased" }, // 3063024602
		{ &Z_Construct_UFunction_AShootingSystemPlayerCharacter_JumpPressed, "JumpPressed" }, // 2106915261
		{ &Z_Construct_UFunction_AShootingSystemPlayerCharacter_JumpReleased, "JumpReleased" }, // 1293861763
		{ &Z_Construct_UFunction_AShootingSystemPlayerCharacter_LookHorizontal, "LookHorizontal" }, // 441016021
		{ &Z_Construct_UFunction_AShootingSystemPlayerCharacter_LookHorizontalAtRate, "LookHorizontalAtRate" }, // 1391191785
		{ &Z_Construct_UFunction_AShootingSystemPlayerCharacter_LookVertical, "LookVertical" }, // 394386690
		{ &Z_Construct_UFunction_AShootingSystemPlayerCharacter_LookVerticalAtRate, "LookVerticalAtRate" }, // 3842266648
		{ &Z_Construct_UFunction_AShootingSystemPlayerCharacter_MoveHorizontal, "MoveHorizontal" }, // 1429332401
		{ &Z_Construct_UFunction_AShootingSystemPlayerCharacter_MoveVertical, "MoveVertical" }, // 1490109682
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShootingSystemPlayerCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Player/ShootingSystemPlayerCharacter.h" },
		{ "ModuleRelativePath", "Player/ShootingSystemPlayerCharacter.h" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AShootingSystemPlayerCharacter_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UInputable_NoRegister, (int32)VTABLE_OFFSET(AShootingSystemPlayerCharacter, IInputable), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AShootingSystemPlayerCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AShootingSystemPlayerCharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AShootingSystemPlayerCharacter_Statics::ClassParams = {
		&AShootingSystemPlayerCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		UE_ARRAY_COUNT(InterfaceParams),
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
	IMPLEMENT_CLASS(AShootingSystemPlayerCharacter, 2769431250);
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
