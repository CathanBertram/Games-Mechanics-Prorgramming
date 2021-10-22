// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SHOOTINGSYSTEM_ShootingSystemPlayerCharacter_generated_h
#error "ShootingSystemPlayerCharacter.generated.h already included, missing '#pragma once' in ShootingSystemPlayerCharacter.h"
#endif
#define SHOOTINGSYSTEM_ShootingSystemPlayerCharacter_generated_h

#define ShootingSystem_Source_ShootingSystem_Player_ShootingSystemPlayerCharacter_h_15_SPARSE_DATA
#define ShootingSystem_Source_ShootingSystem_Player_ShootingSystemPlayerCharacter_h_15_RPC_WRAPPERS \
	virtual void LookHorizontal_Implementation(float value); \
	virtual void LookVertical_Implementation(float value); \
	virtual void MoveHorizontal_Implementation(float value); \
	virtual void MoveVertical_Implementation(float value); \
	virtual void InteractPressed_Implementation(); \
	virtual void FireReleased_Implementation(); \
	virtual void FirePressed_Implementation(); \
	virtual void JumpReleased_Implementation(); \
	virtual void JumpPressed_Implementation(); \
	virtual void Init_Implementation(); \
 \
	DECLARE_FUNCTION(execLookHorizontal); \
	DECLARE_FUNCTION(execLookVertical); \
	DECLARE_FUNCTION(execMoveHorizontal); \
	DECLARE_FUNCTION(execMoveVertical); \
	DECLARE_FUNCTION(execInteractPressed); \
	DECLARE_FUNCTION(execFireReleased); \
	DECLARE_FUNCTION(execFirePressed); \
	DECLARE_FUNCTION(execJumpReleased); \
	DECLARE_FUNCTION(execJumpPressed); \
	DECLARE_FUNCTION(execInit);


#define ShootingSystem_Source_ShootingSystem_Player_ShootingSystemPlayerCharacter_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execLookHorizontal); \
	DECLARE_FUNCTION(execLookVertical); \
	DECLARE_FUNCTION(execMoveHorizontal); \
	DECLARE_FUNCTION(execMoveVertical); \
	DECLARE_FUNCTION(execInteractPressed); \
	DECLARE_FUNCTION(execFireReleased); \
	DECLARE_FUNCTION(execFirePressed); \
	DECLARE_FUNCTION(execJumpReleased); \
	DECLARE_FUNCTION(execJumpPressed); \
	DECLARE_FUNCTION(execInit);


#define ShootingSystem_Source_ShootingSystem_Player_ShootingSystemPlayerCharacter_h_15_EVENT_PARMS \
	struct ShootingSystemPlayerCharacter_eventLookHorizontal_Parms \
	{ \
		float value; \
	}; \
	struct ShootingSystemPlayerCharacter_eventLookVertical_Parms \
	{ \
		float value; \
	}; \
	struct ShootingSystemPlayerCharacter_eventMoveHorizontal_Parms \
	{ \
		float value; \
	}; \
	struct ShootingSystemPlayerCharacter_eventMoveVertical_Parms \
	{ \
		float value; \
	};


#define ShootingSystem_Source_ShootingSystem_Player_ShootingSystemPlayerCharacter_h_15_CALLBACK_WRAPPERS
#define ShootingSystem_Source_ShootingSystem_Player_ShootingSystemPlayerCharacter_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAShootingSystemPlayerCharacter(); \
	friend struct Z_Construct_UClass_AShootingSystemPlayerCharacter_Statics; \
public: \
	DECLARE_CLASS(AShootingSystemPlayerCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ShootingSystem"), NO_API) \
	DECLARE_SERIALIZER(AShootingSystemPlayerCharacter) \
	virtual UObject* _getUObject() const override { return const_cast<AShootingSystemPlayerCharacter*>(this); }


#define ShootingSystem_Source_ShootingSystem_Player_ShootingSystemPlayerCharacter_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAShootingSystemPlayerCharacter(); \
	friend struct Z_Construct_UClass_AShootingSystemPlayerCharacter_Statics; \
public: \
	DECLARE_CLASS(AShootingSystemPlayerCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ShootingSystem"), NO_API) \
	DECLARE_SERIALIZER(AShootingSystemPlayerCharacter) \
	virtual UObject* _getUObject() const override { return const_cast<AShootingSystemPlayerCharacter*>(this); }


#define ShootingSystem_Source_ShootingSystem_Player_ShootingSystemPlayerCharacter_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AShootingSystemPlayerCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AShootingSystemPlayerCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AShootingSystemPlayerCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AShootingSystemPlayerCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AShootingSystemPlayerCharacter(AShootingSystemPlayerCharacter&&); \
	NO_API AShootingSystemPlayerCharacter(const AShootingSystemPlayerCharacter&); \
public:


#define ShootingSystem_Source_ShootingSystem_Player_ShootingSystemPlayerCharacter_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AShootingSystemPlayerCharacter(AShootingSystemPlayerCharacter&&); \
	NO_API AShootingSystemPlayerCharacter(const AShootingSystemPlayerCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AShootingSystemPlayerCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AShootingSystemPlayerCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AShootingSystemPlayerCharacter)


#define ShootingSystem_Source_ShootingSystem_Player_ShootingSystemPlayerCharacter_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__m_GunChildActor() { return STRUCT_OFFSET(AShootingSystemPlayerCharacter, m_GunChildActor); } \
	FORCEINLINE static uint32 __PPO__m_FPCameraComponent() { return STRUCT_OFFSET(AShootingSystemPlayerCharacter, m_FPCameraComponent); }


#define ShootingSystem_Source_ShootingSystem_Player_ShootingSystemPlayerCharacter_h_12_PROLOG \
	ShootingSystem_Source_ShootingSystem_Player_ShootingSystemPlayerCharacter_h_15_EVENT_PARMS


#define ShootingSystem_Source_ShootingSystem_Player_ShootingSystemPlayerCharacter_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ShootingSystem_Source_ShootingSystem_Player_ShootingSystemPlayerCharacter_h_15_PRIVATE_PROPERTY_OFFSET \
	ShootingSystem_Source_ShootingSystem_Player_ShootingSystemPlayerCharacter_h_15_SPARSE_DATA \
	ShootingSystem_Source_ShootingSystem_Player_ShootingSystemPlayerCharacter_h_15_RPC_WRAPPERS \
	ShootingSystem_Source_ShootingSystem_Player_ShootingSystemPlayerCharacter_h_15_CALLBACK_WRAPPERS \
	ShootingSystem_Source_ShootingSystem_Player_ShootingSystemPlayerCharacter_h_15_INCLASS \
	ShootingSystem_Source_ShootingSystem_Player_ShootingSystemPlayerCharacter_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ShootingSystem_Source_ShootingSystem_Player_ShootingSystemPlayerCharacter_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ShootingSystem_Source_ShootingSystem_Player_ShootingSystemPlayerCharacter_h_15_PRIVATE_PROPERTY_OFFSET \
	ShootingSystem_Source_ShootingSystem_Player_ShootingSystemPlayerCharacter_h_15_SPARSE_DATA \
	ShootingSystem_Source_ShootingSystem_Player_ShootingSystemPlayerCharacter_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	ShootingSystem_Source_ShootingSystem_Player_ShootingSystemPlayerCharacter_h_15_CALLBACK_WRAPPERS \
	ShootingSystem_Source_ShootingSystem_Player_ShootingSystemPlayerCharacter_h_15_INCLASS_NO_PURE_DECLS \
	ShootingSystem_Source_ShootingSystem_Player_ShootingSystemPlayerCharacter_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SHOOTINGSYSTEM_API UClass* StaticClass<class AShootingSystemPlayerCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ShootingSystem_Source_ShootingSystem_Player_ShootingSystemPlayerCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
