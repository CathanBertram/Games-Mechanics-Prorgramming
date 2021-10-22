// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef SHOOTINGSYSTEM_ShootingSystemProjectile_generated_h
#error "ShootingSystemProjectile.generated.h already included, missing '#pragma once' in ShootingSystemProjectile.h"
#endif
#define SHOOTINGSYSTEM_ShootingSystemProjectile_generated_h

#define ShootingSystem_Source_ShootingSystem_ShootingSystemProjectile_h_15_SPARSE_DATA
#define ShootingSystem_Source_ShootingSystem_ShootingSystemProjectile_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define ShootingSystem_Source_ShootingSystem_ShootingSystemProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define ShootingSystem_Source_ShootingSystem_ShootingSystemProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAShootingSystemProjectile(); \
	friend struct Z_Construct_UClass_AShootingSystemProjectile_Statics; \
public: \
	DECLARE_CLASS(AShootingSystemProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ShootingSystem"), NO_API) \
	DECLARE_SERIALIZER(AShootingSystemProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define ShootingSystem_Source_ShootingSystem_ShootingSystemProjectile_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAShootingSystemProjectile(); \
	friend struct Z_Construct_UClass_AShootingSystemProjectile_Statics; \
public: \
	DECLARE_CLASS(AShootingSystemProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ShootingSystem"), NO_API) \
	DECLARE_SERIALIZER(AShootingSystemProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define ShootingSystem_Source_ShootingSystem_ShootingSystemProjectile_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AShootingSystemProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AShootingSystemProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AShootingSystemProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AShootingSystemProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AShootingSystemProjectile(AShootingSystemProjectile&&); \
	NO_API AShootingSystemProjectile(const AShootingSystemProjectile&); \
public:


#define ShootingSystem_Source_ShootingSystem_ShootingSystemProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AShootingSystemProjectile(AShootingSystemProjectile&&); \
	NO_API AShootingSystemProjectile(const AShootingSystemProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AShootingSystemProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AShootingSystemProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AShootingSystemProjectile)


#define ShootingSystem_Source_ShootingSystem_ShootingSystemProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CollisionComp() { return STRUCT_OFFSET(AShootingSystemProjectile, CollisionComp); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(AShootingSystemProjectile, ProjectileMovement); }


#define ShootingSystem_Source_ShootingSystem_ShootingSystemProjectile_h_12_PROLOG
#define ShootingSystem_Source_ShootingSystem_ShootingSystemProjectile_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ShootingSystem_Source_ShootingSystem_ShootingSystemProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	ShootingSystem_Source_ShootingSystem_ShootingSystemProjectile_h_15_SPARSE_DATA \
	ShootingSystem_Source_ShootingSystem_ShootingSystemProjectile_h_15_RPC_WRAPPERS \
	ShootingSystem_Source_ShootingSystem_ShootingSystemProjectile_h_15_INCLASS \
	ShootingSystem_Source_ShootingSystem_ShootingSystemProjectile_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ShootingSystem_Source_ShootingSystem_ShootingSystemProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ShootingSystem_Source_ShootingSystem_ShootingSystemProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	ShootingSystem_Source_ShootingSystem_ShootingSystemProjectile_h_15_SPARSE_DATA \
	ShootingSystem_Source_ShootingSystem_ShootingSystemProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	ShootingSystem_Source_ShootingSystem_ShootingSystemProjectile_h_15_INCLASS_NO_PURE_DECLS \
	ShootingSystem_Source_ShootingSystem_ShootingSystemProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SHOOTINGSYSTEM_API UClass* StaticClass<class AShootingSystemProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ShootingSystem_Source_ShootingSystem_ShootingSystemProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
