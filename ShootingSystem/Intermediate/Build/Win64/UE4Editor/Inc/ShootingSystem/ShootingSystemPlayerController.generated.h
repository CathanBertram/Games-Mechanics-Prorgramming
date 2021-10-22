// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SHOOTINGSYSTEM_ShootingSystemPlayerController_generated_h
#error "ShootingSystemPlayerController.generated.h already included, missing '#pragma once' in ShootingSystemPlayerController.h"
#endif
#define SHOOTINGSYSTEM_ShootingSystemPlayerController_generated_h

#define ShootingSystem_Source_ShootingSystem_Player_ShootingSystemPlayerController_h_17_SPARSE_DATA
#define ShootingSystem_Source_ShootingSystem_Player_ShootingSystemPlayerController_h_17_RPC_WRAPPERS \
	virtual void Init_Implementation(); \
 \
	DECLARE_FUNCTION(execInit);


#define ShootingSystem_Source_ShootingSystem_Player_ShootingSystemPlayerController_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execInit);


#define ShootingSystem_Source_ShootingSystem_Player_ShootingSystemPlayerController_h_17_EVENT_PARMS
#define ShootingSystem_Source_ShootingSystem_Player_ShootingSystemPlayerController_h_17_CALLBACK_WRAPPERS
#define ShootingSystem_Source_ShootingSystem_Player_ShootingSystemPlayerController_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAShootingSystemPlayerController(); \
	friend struct Z_Construct_UClass_AShootingSystemPlayerController_Statics; \
public: \
	DECLARE_CLASS(AShootingSystemPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ShootingSystem"), NO_API) \
	DECLARE_SERIALIZER(AShootingSystemPlayerController) \
	virtual UObject* _getUObject() const override { return const_cast<AShootingSystemPlayerController*>(this); }


#define ShootingSystem_Source_ShootingSystem_Player_ShootingSystemPlayerController_h_17_INCLASS \
private: \
	static void StaticRegisterNativesAShootingSystemPlayerController(); \
	friend struct Z_Construct_UClass_AShootingSystemPlayerController_Statics; \
public: \
	DECLARE_CLASS(AShootingSystemPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ShootingSystem"), NO_API) \
	DECLARE_SERIALIZER(AShootingSystemPlayerController) \
	virtual UObject* _getUObject() const override { return const_cast<AShootingSystemPlayerController*>(this); }


#define ShootingSystem_Source_ShootingSystem_Player_ShootingSystemPlayerController_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AShootingSystemPlayerController(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AShootingSystemPlayerController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AShootingSystemPlayerController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AShootingSystemPlayerController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AShootingSystemPlayerController(AShootingSystemPlayerController&&); \
	NO_API AShootingSystemPlayerController(const AShootingSystemPlayerController&); \
public:


#define ShootingSystem_Source_ShootingSystem_Player_ShootingSystemPlayerController_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AShootingSystemPlayerController(AShootingSystemPlayerController&&); \
	NO_API AShootingSystemPlayerController(const AShootingSystemPlayerController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AShootingSystemPlayerController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AShootingSystemPlayerController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AShootingSystemPlayerController)


#define ShootingSystem_Source_ShootingSystem_Player_ShootingSystemPlayerController_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__pawnToSpawn() { return STRUCT_OFFSET(AShootingSystemPlayerController, pawnToSpawn); } \
	FORCEINLINE static uint32 __PPO__MouseHorizontalRate() { return STRUCT_OFFSET(AShootingSystemPlayerController, MouseHorizontalRate); } \
	FORCEINLINE static uint32 __PPO__MouseVerticalRate() { return STRUCT_OFFSET(AShootingSystemPlayerController, MouseVerticalRate); }


#define ShootingSystem_Source_ShootingSystem_Player_ShootingSystemPlayerController_h_14_PROLOG \
	ShootingSystem_Source_ShootingSystem_Player_ShootingSystemPlayerController_h_17_EVENT_PARMS


#define ShootingSystem_Source_ShootingSystem_Player_ShootingSystemPlayerController_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ShootingSystem_Source_ShootingSystem_Player_ShootingSystemPlayerController_h_17_PRIVATE_PROPERTY_OFFSET \
	ShootingSystem_Source_ShootingSystem_Player_ShootingSystemPlayerController_h_17_SPARSE_DATA \
	ShootingSystem_Source_ShootingSystem_Player_ShootingSystemPlayerController_h_17_RPC_WRAPPERS \
	ShootingSystem_Source_ShootingSystem_Player_ShootingSystemPlayerController_h_17_CALLBACK_WRAPPERS \
	ShootingSystem_Source_ShootingSystem_Player_ShootingSystemPlayerController_h_17_INCLASS \
	ShootingSystem_Source_ShootingSystem_Player_ShootingSystemPlayerController_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ShootingSystem_Source_ShootingSystem_Player_ShootingSystemPlayerController_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ShootingSystem_Source_ShootingSystem_Player_ShootingSystemPlayerController_h_17_PRIVATE_PROPERTY_OFFSET \
	ShootingSystem_Source_ShootingSystem_Player_ShootingSystemPlayerController_h_17_SPARSE_DATA \
	ShootingSystem_Source_ShootingSystem_Player_ShootingSystemPlayerController_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	ShootingSystem_Source_ShootingSystem_Player_ShootingSystemPlayerController_h_17_CALLBACK_WRAPPERS \
	ShootingSystem_Source_ShootingSystem_Player_ShootingSystemPlayerController_h_17_INCLASS_NO_PURE_DECLS \
	ShootingSystem_Source_ShootingSystem_Player_ShootingSystemPlayerController_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SHOOTINGSYSTEM_API UClass* StaticClass<class AShootingSystemPlayerController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ShootingSystem_Source_ShootingSystem_Player_ShootingSystemPlayerController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
