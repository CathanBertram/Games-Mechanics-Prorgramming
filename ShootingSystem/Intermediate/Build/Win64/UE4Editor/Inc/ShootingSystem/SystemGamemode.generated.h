// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SHOOTINGSYSTEM_SystemGamemode_generated_h
#error "SystemGamemode.generated.h already included, missing '#pragma once' in SystemGamemode.h"
#endif
#define SHOOTINGSYSTEM_SystemGamemode_generated_h

#define ShootingSystem_Source_ShootingSystem_SystemGamemode_h_15_SPARSE_DATA
#define ShootingSystem_Source_ShootingSystem_SystemGamemode_h_15_RPC_WRAPPERS
#define ShootingSystem_Source_ShootingSystem_SystemGamemode_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define ShootingSystem_Source_ShootingSystem_SystemGamemode_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASystemGamemode(); \
	friend struct Z_Construct_UClass_ASystemGamemode_Statics; \
public: \
	DECLARE_CLASS(ASystemGamemode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/ShootingSystem"), NO_API) \
	DECLARE_SERIALIZER(ASystemGamemode)


#define ShootingSystem_Source_ShootingSystem_SystemGamemode_h_15_INCLASS \
private: \
	static void StaticRegisterNativesASystemGamemode(); \
	friend struct Z_Construct_UClass_ASystemGamemode_Statics; \
public: \
	DECLARE_CLASS(ASystemGamemode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/ShootingSystem"), NO_API) \
	DECLARE_SERIALIZER(ASystemGamemode)


#define ShootingSystem_Source_ShootingSystem_SystemGamemode_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASystemGamemode(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASystemGamemode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASystemGamemode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASystemGamemode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASystemGamemode(ASystemGamemode&&); \
	NO_API ASystemGamemode(const ASystemGamemode&); \
public:


#define ShootingSystem_Source_ShootingSystem_SystemGamemode_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASystemGamemode(ASystemGamemode&&); \
	NO_API ASystemGamemode(const ASystemGamemode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASystemGamemode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASystemGamemode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASystemGamemode)


#define ShootingSystem_Source_ShootingSystem_SystemGamemode_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__playerControllers() { return STRUCT_OFFSET(ASystemGamemode, playerControllers); }


#define ShootingSystem_Source_ShootingSystem_SystemGamemode_h_12_PROLOG
#define ShootingSystem_Source_ShootingSystem_SystemGamemode_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ShootingSystem_Source_ShootingSystem_SystemGamemode_h_15_PRIVATE_PROPERTY_OFFSET \
	ShootingSystem_Source_ShootingSystem_SystemGamemode_h_15_SPARSE_DATA \
	ShootingSystem_Source_ShootingSystem_SystemGamemode_h_15_RPC_WRAPPERS \
	ShootingSystem_Source_ShootingSystem_SystemGamemode_h_15_INCLASS \
	ShootingSystem_Source_ShootingSystem_SystemGamemode_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ShootingSystem_Source_ShootingSystem_SystemGamemode_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ShootingSystem_Source_ShootingSystem_SystemGamemode_h_15_PRIVATE_PROPERTY_OFFSET \
	ShootingSystem_Source_ShootingSystem_SystemGamemode_h_15_SPARSE_DATA \
	ShootingSystem_Source_ShootingSystem_SystemGamemode_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	ShootingSystem_Source_ShootingSystem_SystemGamemode_h_15_INCLASS_NO_PURE_DECLS \
	ShootingSystem_Source_ShootingSystem_SystemGamemode_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SHOOTINGSYSTEM_API UClass* StaticClass<class ASystemGamemode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ShootingSystem_Source_ShootingSystem_SystemGamemode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
