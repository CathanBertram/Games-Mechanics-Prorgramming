// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SHOOTINGSYSTEM_Inputable_generated_h
#error "Inputable.generated.h already included, missing '#pragma once' in Inputable.h"
#endif
#define SHOOTINGSYSTEM_Inputable_generated_h

#define ShootingSystem_Source_ShootingSystem_Interfaces_Inputable_h_13_SPARSE_DATA
#define ShootingSystem_Source_ShootingSystem_Interfaces_Inputable_h_13_RPC_WRAPPERS \
	virtual void LookHorizontalAtRate_Implementation(float rate) {}; \
	virtual void LookVerticalAtRate_Implementation(float rate) {}; \
	virtual void LookHorizontal_Implementation(float value) {}; \
	virtual void LookVertical_Implementation(float value) {}; \
	virtual void MoveHorizontal_Implementation(float value) {}; \
	virtual void MoveVertical_Implementation(float value) {}; \
	virtual void InteractReleased_Implementation() {}; \
	virtual void InteractPressed_Implementation() {}; \
	virtual void FireReleased_Implementation() {}; \
	virtual void FirePressed_Implementation() {}; \
	virtual void JumpReleased_Implementation() {}; \
	virtual void JumpPressed_Implementation() {}; \
 \
	DECLARE_FUNCTION(execLookHorizontalAtRate); \
	DECLARE_FUNCTION(execLookVerticalAtRate); \
	DECLARE_FUNCTION(execLookHorizontal); \
	DECLARE_FUNCTION(execLookVertical); \
	DECLARE_FUNCTION(execMoveHorizontal); \
	DECLARE_FUNCTION(execMoveVertical); \
	DECLARE_FUNCTION(execInteractReleased); \
	DECLARE_FUNCTION(execInteractPressed); \
	DECLARE_FUNCTION(execFireReleased); \
	DECLARE_FUNCTION(execFirePressed); \
	DECLARE_FUNCTION(execJumpReleased); \
	DECLARE_FUNCTION(execJumpPressed);


#define ShootingSystem_Source_ShootingSystem_Interfaces_Inputable_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void LookHorizontalAtRate_Implementation(float rate) {}; \
	virtual void LookVerticalAtRate_Implementation(float rate) {}; \
	virtual void LookHorizontal_Implementation(float value) {}; \
	virtual void LookVertical_Implementation(float value) {}; \
	virtual void MoveHorizontal_Implementation(float value) {}; \
	virtual void MoveVertical_Implementation(float value) {}; \
	virtual void InteractReleased_Implementation() {}; \
	virtual void InteractPressed_Implementation() {}; \
	virtual void FireReleased_Implementation() {}; \
	virtual void FirePressed_Implementation() {}; \
	virtual void JumpReleased_Implementation() {}; \
	virtual void JumpPressed_Implementation() {}; \
 \
	DECLARE_FUNCTION(execLookHorizontalAtRate); \
	DECLARE_FUNCTION(execLookVerticalAtRate); \
	DECLARE_FUNCTION(execLookHorizontal); \
	DECLARE_FUNCTION(execLookVertical); \
	DECLARE_FUNCTION(execMoveHorizontal); \
	DECLARE_FUNCTION(execMoveVertical); \
	DECLARE_FUNCTION(execInteractReleased); \
	DECLARE_FUNCTION(execInteractPressed); \
	DECLARE_FUNCTION(execFireReleased); \
	DECLARE_FUNCTION(execFirePressed); \
	DECLARE_FUNCTION(execJumpReleased); \
	DECLARE_FUNCTION(execJumpPressed);


#define ShootingSystem_Source_ShootingSystem_Interfaces_Inputable_h_13_EVENT_PARMS \
	struct Inputable_eventLookHorizontal_Parms \
	{ \
		float value; \
	}; \
	struct Inputable_eventLookHorizontalAtRate_Parms \
	{ \
		float rate; \
	}; \
	struct Inputable_eventLookVertical_Parms \
	{ \
		float value; \
	}; \
	struct Inputable_eventLookVerticalAtRate_Parms \
	{ \
		float rate; \
	}; \
	struct Inputable_eventMoveHorizontal_Parms \
	{ \
		float value; \
	}; \
	struct Inputable_eventMoveVertical_Parms \
	{ \
		float value; \
	};


#define ShootingSystem_Source_ShootingSystem_Interfaces_Inputable_h_13_CALLBACK_WRAPPERS
#define ShootingSystem_Source_ShootingSystem_Interfaces_Inputable_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	SHOOTINGSYSTEM_API UInputable(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInputable) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SHOOTINGSYSTEM_API, UInputable); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInputable); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	SHOOTINGSYSTEM_API UInputable(UInputable&&); \
	SHOOTINGSYSTEM_API UInputable(const UInputable&); \
public:


#define ShootingSystem_Source_ShootingSystem_Interfaces_Inputable_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	SHOOTINGSYSTEM_API UInputable(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	SHOOTINGSYSTEM_API UInputable(UInputable&&); \
	SHOOTINGSYSTEM_API UInputable(const UInputable&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SHOOTINGSYSTEM_API, UInputable); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInputable); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInputable)


#define ShootingSystem_Source_ShootingSystem_Interfaces_Inputable_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUInputable(); \
	friend struct Z_Construct_UClass_UInputable_Statics; \
public: \
	DECLARE_CLASS(UInputable, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/ShootingSystem"), SHOOTINGSYSTEM_API) \
	DECLARE_SERIALIZER(UInputable)


#define ShootingSystem_Source_ShootingSystem_Interfaces_Inputable_h_13_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	ShootingSystem_Source_ShootingSystem_Interfaces_Inputable_h_13_GENERATED_UINTERFACE_BODY() \
	ShootingSystem_Source_ShootingSystem_Interfaces_Inputable_h_13_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ShootingSystem_Source_ShootingSystem_Interfaces_Inputable_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	ShootingSystem_Source_ShootingSystem_Interfaces_Inputable_h_13_GENERATED_UINTERFACE_BODY() \
	ShootingSystem_Source_ShootingSystem_Interfaces_Inputable_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ShootingSystem_Source_ShootingSystem_Interfaces_Inputable_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IInputable() {} \
public: \
	typedef UInputable UClassType; \
	typedef IInputable ThisClass; \
	static void Execute_FirePressed(UObject* O); \
	static void Execute_FireReleased(UObject* O); \
	static void Execute_InteractPressed(UObject* O); \
	static void Execute_InteractReleased(UObject* O); \
	static void Execute_JumpPressed(UObject* O); \
	static void Execute_JumpReleased(UObject* O); \
	static void Execute_LookHorizontal(UObject* O, float value); \
	static void Execute_LookHorizontalAtRate(UObject* O, float rate); \
	static void Execute_LookVertical(UObject* O, float value); \
	static void Execute_LookVerticalAtRate(UObject* O, float rate); \
	static void Execute_MoveHorizontal(UObject* O, float value); \
	static void Execute_MoveVertical(UObject* O, float value); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define ShootingSystem_Source_ShootingSystem_Interfaces_Inputable_h_13_INCLASS_IINTERFACE \
protected: \
	virtual ~IInputable() {} \
public: \
	typedef UInputable UClassType; \
	typedef IInputable ThisClass; \
	static void Execute_FirePressed(UObject* O); \
	static void Execute_FireReleased(UObject* O); \
	static void Execute_InteractPressed(UObject* O); \
	static void Execute_InteractReleased(UObject* O); \
	static void Execute_JumpPressed(UObject* O); \
	static void Execute_JumpReleased(UObject* O); \
	static void Execute_LookHorizontal(UObject* O, float value); \
	static void Execute_LookHorizontalAtRate(UObject* O, float rate); \
	static void Execute_LookVertical(UObject* O, float value); \
	static void Execute_LookVerticalAtRate(UObject* O, float rate); \
	static void Execute_MoveHorizontal(UObject* O, float value); \
	static void Execute_MoveVertical(UObject* O, float value); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define ShootingSystem_Source_ShootingSystem_Interfaces_Inputable_h_10_PROLOG \
	ShootingSystem_Source_ShootingSystem_Interfaces_Inputable_h_13_EVENT_PARMS


#define ShootingSystem_Source_ShootingSystem_Interfaces_Inputable_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ShootingSystem_Source_ShootingSystem_Interfaces_Inputable_h_13_SPARSE_DATA \
	ShootingSystem_Source_ShootingSystem_Interfaces_Inputable_h_13_RPC_WRAPPERS \
	ShootingSystem_Source_ShootingSystem_Interfaces_Inputable_h_13_CALLBACK_WRAPPERS \
	ShootingSystem_Source_ShootingSystem_Interfaces_Inputable_h_13_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ShootingSystem_Source_ShootingSystem_Interfaces_Inputable_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ShootingSystem_Source_ShootingSystem_Interfaces_Inputable_h_13_SPARSE_DATA \
	ShootingSystem_Source_ShootingSystem_Interfaces_Inputable_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	ShootingSystem_Source_ShootingSystem_Interfaces_Inputable_h_13_CALLBACK_WRAPPERS \
	ShootingSystem_Source_ShootingSystem_Interfaces_Inputable_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SHOOTINGSYSTEM_API UClass* StaticClass<class UInputable>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ShootingSystem_Source_ShootingSystem_Interfaces_Inputable_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
