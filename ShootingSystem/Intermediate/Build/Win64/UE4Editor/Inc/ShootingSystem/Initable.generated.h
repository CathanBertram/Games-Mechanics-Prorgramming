// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SHOOTINGSYSTEM_Initable_generated_h
#error "Initable.generated.h already included, missing '#pragma once' in Initable.h"
#endif
#define SHOOTINGSYSTEM_Initable_generated_h

#define ShootingSystem_Source_ShootingSystem_Interfaces_Initable_h_13_SPARSE_DATA
#define ShootingSystem_Source_ShootingSystem_Interfaces_Initable_h_13_RPC_WRAPPERS \
	virtual void Init_Implementation() {}; \
 \
	DECLARE_FUNCTION(execInit);


#define ShootingSystem_Source_ShootingSystem_Interfaces_Initable_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Init_Implementation() {}; \
 \
	DECLARE_FUNCTION(execInit);


#define ShootingSystem_Source_ShootingSystem_Interfaces_Initable_h_13_EVENT_PARMS
#define ShootingSystem_Source_ShootingSystem_Interfaces_Initable_h_13_CALLBACK_WRAPPERS
#define ShootingSystem_Source_ShootingSystem_Interfaces_Initable_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	SHOOTINGSYSTEM_API UInitable(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInitable) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SHOOTINGSYSTEM_API, UInitable); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInitable); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	SHOOTINGSYSTEM_API UInitable(UInitable&&); \
	SHOOTINGSYSTEM_API UInitable(const UInitable&); \
public:


#define ShootingSystem_Source_ShootingSystem_Interfaces_Initable_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	SHOOTINGSYSTEM_API UInitable(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	SHOOTINGSYSTEM_API UInitable(UInitable&&); \
	SHOOTINGSYSTEM_API UInitable(const UInitable&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SHOOTINGSYSTEM_API, UInitable); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInitable); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInitable)


#define ShootingSystem_Source_ShootingSystem_Interfaces_Initable_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUInitable(); \
	friend struct Z_Construct_UClass_UInitable_Statics; \
public: \
	DECLARE_CLASS(UInitable, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/ShootingSystem"), SHOOTINGSYSTEM_API) \
	DECLARE_SERIALIZER(UInitable)


#define ShootingSystem_Source_ShootingSystem_Interfaces_Initable_h_13_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	ShootingSystem_Source_ShootingSystem_Interfaces_Initable_h_13_GENERATED_UINTERFACE_BODY() \
	ShootingSystem_Source_ShootingSystem_Interfaces_Initable_h_13_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ShootingSystem_Source_ShootingSystem_Interfaces_Initable_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	ShootingSystem_Source_ShootingSystem_Interfaces_Initable_h_13_GENERATED_UINTERFACE_BODY() \
	ShootingSystem_Source_ShootingSystem_Interfaces_Initable_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ShootingSystem_Source_ShootingSystem_Interfaces_Initable_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IInitable() {} \
public: \
	typedef UInitable UClassType; \
	typedef IInitable ThisClass; \
	static void Execute_Init(UObject* O); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define ShootingSystem_Source_ShootingSystem_Interfaces_Initable_h_13_INCLASS_IINTERFACE \
protected: \
	virtual ~IInitable() {} \
public: \
	typedef UInitable UClassType; \
	typedef IInitable ThisClass; \
	static void Execute_Init(UObject* O); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define ShootingSystem_Source_ShootingSystem_Interfaces_Initable_h_10_PROLOG \
	ShootingSystem_Source_ShootingSystem_Interfaces_Initable_h_13_EVENT_PARMS


#define ShootingSystem_Source_ShootingSystem_Interfaces_Initable_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ShootingSystem_Source_ShootingSystem_Interfaces_Initable_h_13_SPARSE_DATA \
	ShootingSystem_Source_ShootingSystem_Interfaces_Initable_h_13_RPC_WRAPPERS \
	ShootingSystem_Source_ShootingSystem_Interfaces_Initable_h_13_CALLBACK_WRAPPERS \
	ShootingSystem_Source_ShootingSystem_Interfaces_Initable_h_13_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ShootingSystem_Source_ShootingSystem_Interfaces_Initable_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ShootingSystem_Source_ShootingSystem_Interfaces_Initable_h_13_SPARSE_DATA \
	ShootingSystem_Source_ShootingSystem_Interfaces_Initable_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	ShootingSystem_Source_ShootingSystem_Interfaces_Initable_h_13_CALLBACK_WRAPPERS \
	ShootingSystem_Source_ShootingSystem_Interfaces_Initable_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SHOOTINGSYSTEM_API UClass* StaticClass<class UInitable>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ShootingSystem_Source_ShootingSystem_Interfaces_Initable_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
