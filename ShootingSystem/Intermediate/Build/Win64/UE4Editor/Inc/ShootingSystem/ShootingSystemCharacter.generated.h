// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SHOOTINGSYSTEM_ShootingSystemCharacter_generated_h
#error "ShootingSystemCharacter.generated.h already included, missing '#pragma once' in ShootingSystemCharacter.h"
#endif
#define SHOOTINGSYSTEM_ShootingSystemCharacter_generated_h

#define ShootingSystem_Source_ShootingSystem_StarterContent_ShootingSystemCharacter_h_20_SPARSE_DATA
#define ShootingSystem_Source_ShootingSystem_StarterContent_ShootingSystemCharacter_h_20_RPC_WRAPPERS
#define ShootingSystem_Source_ShootingSystem_StarterContent_ShootingSystemCharacter_h_20_RPC_WRAPPERS_NO_PURE_DECLS
#define ShootingSystem_Source_ShootingSystem_StarterContent_ShootingSystemCharacter_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAShootingSystemCharacter(); \
	friend struct Z_Construct_UClass_AShootingSystemCharacter_Statics; \
public: \
	DECLARE_CLASS(AShootingSystemCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ShootingSystem"), NO_API) \
	DECLARE_SERIALIZER(AShootingSystemCharacter)


#define ShootingSystem_Source_ShootingSystem_StarterContent_ShootingSystemCharacter_h_20_INCLASS \
private: \
	static void StaticRegisterNativesAShootingSystemCharacter(); \
	friend struct Z_Construct_UClass_AShootingSystemCharacter_Statics; \
public: \
	DECLARE_CLASS(AShootingSystemCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ShootingSystem"), NO_API) \
	DECLARE_SERIALIZER(AShootingSystemCharacter)


#define ShootingSystem_Source_ShootingSystem_StarterContent_ShootingSystemCharacter_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AShootingSystemCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AShootingSystemCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AShootingSystemCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AShootingSystemCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AShootingSystemCharacter(AShootingSystemCharacter&&); \
	NO_API AShootingSystemCharacter(const AShootingSystemCharacter&); \
public:


#define ShootingSystem_Source_ShootingSystem_StarterContent_ShootingSystemCharacter_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AShootingSystemCharacter(AShootingSystemCharacter&&); \
	NO_API AShootingSystemCharacter(const AShootingSystemCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AShootingSystemCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AShootingSystemCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AShootingSystemCharacter)


#define ShootingSystem_Source_ShootingSystem_StarterContent_ShootingSystemCharacter_h_20_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Mesh1P() { return STRUCT_OFFSET(AShootingSystemCharacter, Mesh1P); } \
	FORCEINLINE static uint32 __PPO__FP_Gun() { return STRUCT_OFFSET(AShootingSystemCharacter, FP_Gun); } \
	FORCEINLINE static uint32 __PPO__FP_MuzzleLocation() { return STRUCT_OFFSET(AShootingSystemCharacter, FP_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__FirstPersonCameraComponent() { return STRUCT_OFFSET(AShootingSystemCharacter, FirstPersonCameraComponent); }


#define ShootingSystem_Source_ShootingSystem_StarterContent_ShootingSystemCharacter_h_17_PROLOG
#define ShootingSystem_Source_ShootingSystem_StarterContent_ShootingSystemCharacter_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ShootingSystem_Source_ShootingSystem_StarterContent_ShootingSystemCharacter_h_20_PRIVATE_PROPERTY_OFFSET \
	ShootingSystem_Source_ShootingSystem_StarterContent_ShootingSystemCharacter_h_20_SPARSE_DATA \
	ShootingSystem_Source_ShootingSystem_StarterContent_ShootingSystemCharacter_h_20_RPC_WRAPPERS \
	ShootingSystem_Source_ShootingSystem_StarterContent_ShootingSystemCharacter_h_20_INCLASS \
	ShootingSystem_Source_ShootingSystem_StarterContent_ShootingSystemCharacter_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ShootingSystem_Source_ShootingSystem_StarterContent_ShootingSystemCharacter_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ShootingSystem_Source_ShootingSystem_StarterContent_ShootingSystemCharacter_h_20_PRIVATE_PROPERTY_OFFSET \
	ShootingSystem_Source_ShootingSystem_StarterContent_ShootingSystemCharacter_h_20_SPARSE_DATA \
	ShootingSystem_Source_ShootingSystem_StarterContent_ShootingSystemCharacter_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	ShootingSystem_Source_ShootingSystem_StarterContent_ShootingSystemCharacter_h_20_INCLASS_NO_PURE_DECLS \
	ShootingSystem_Source_ShootingSystem_StarterContent_ShootingSystemCharacter_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SHOOTINGSYSTEM_API UClass* StaticClass<class AShootingSystemCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ShootingSystem_Source_ShootingSystem_StarterContent_ShootingSystemCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
