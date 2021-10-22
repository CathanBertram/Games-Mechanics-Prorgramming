// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APlayerController;
#ifdef SHOOTINGSYSTEM_GetPlayerController_generated_h
#error "GetPlayerController.generated.h already included, missing '#pragma once' in GetPlayerController.h"
#endif
#define SHOOTINGSYSTEM_GetPlayerController_generated_h

#define ShootingSystem_Source_ShootingSystem_Interfaces_GetPlayerController_h_13_SPARSE_DATA
#define ShootingSystem_Source_ShootingSystem_Interfaces_GetPlayerController_h_13_RPC_WRAPPERS \
	virtual APlayerController* GetPlayerController_Implementation() { return NULL; }; \
 \
	DECLARE_FUNCTION(execGetPlayerController);


#define ShootingSystem_Source_ShootingSystem_Interfaces_GetPlayerController_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual APlayerController* GetPlayerController_Implementation() { return NULL; }; \
 \
	DECLARE_FUNCTION(execGetPlayerController);


#define ShootingSystem_Source_ShootingSystem_Interfaces_GetPlayerController_h_13_EVENT_PARMS \
	struct GetPlayerController_eventGetPlayerController_Parms \
	{ \
		APlayerController* ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		GetPlayerController_eventGetPlayerController_Parms() \
			: ReturnValue(NULL) \
		{ \
		} \
	};


#define ShootingSystem_Source_ShootingSystem_Interfaces_GetPlayerController_h_13_CALLBACK_WRAPPERS
#define ShootingSystem_Source_ShootingSystem_Interfaces_GetPlayerController_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	SHOOTINGSYSTEM_API UGetPlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGetPlayerController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SHOOTINGSYSTEM_API, UGetPlayerController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGetPlayerController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	SHOOTINGSYSTEM_API UGetPlayerController(UGetPlayerController&&); \
	SHOOTINGSYSTEM_API UGetPlayerController(const UGetPlayerController&); \
public:


#define ShootingSystem_Source_ShootingSystem_Interfaces_GetPlayerController_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	SHOOTINGSYSTEM_API UGetPlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	SHOOTINGSYSTEM_API UGetPlayerController(UGetPlayerController&&); \
	SHOOTINGSYSTEM_API UGetPlayerController(const UGetPlayerController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SHOOTINGSYSTEM_API, UGetPlayerController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGetPlayerController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGetPlayerController)


#define ShootingSystem_Source_ShootingSystem_Interfaces_GetPlayerController_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUGetPlayerController(); \
	friend struct Z_Construct_UClass_UGetPlayerController_Statics; \
public: \
	DECLARE_CLASS(UGetPlayerController, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/ShootingSystem"), SHOOTINGSYSTEM_API) \
	DECLARE_SERIALIZER(UGetPlayerController)


#define ShootingSystem_Source_ShootingSystem_Interfaces_GetPlayerController_h_13_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	ShootingSystem_Source_ShootingSystem_Interfaces_GetPlayerController_h_13_GENERATED_UINTERFACE_BODY() \
	ShootingSystem_Source_ShootingSystem_Interfaces_GetPlayerController_h_13_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ShootingSystem_Source_ShootingSystem_Interfaces_GetPlayerController_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	ShootingSystem_Source_ShootingSystem_Interfaces_GetPlayerController_h_13_GENERATED_UINTERFACE_BODY() \
	ShootingSystem_Source_ShootingSystem_Interfaces_GetPlayerController_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ShootingSystem_Source_ShootingSystem_Interfaces_GetPlayerController_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IGetPlayerController() {} \
public: \
	typedef UGetPlayerController UClassType; \
	typedef IGetPlayerController ThisClass; \
	static APlayerController* Execute_GetPlayerController(UObject* O); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define ShootingSystem_Source_ShootingSystem_Interfaces_GetPlayerController_h_13_INCLASS_IINTERFACE \
protected: \
	virtual ~IGetPlayerController() {} \
public: \
	typedef UGetPlayerController UClassType; \
	typedef IGetPlayerController ThisClass; \
	static APlayerController* Execute_GetPlayerController(UObject* O); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define ShootingSystem_Source_ShootingSystem_Interfaces_GetPlayerController_h_10_PROLOG \
	ShootingSystem_Source_ShootingSystem_Interfaces_GetPlayerController_h_13_EVENT_PARMS


#define ShootingSystem_Source_ShootingSystem_Interfaces_GetPlayerController_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ShootingSystem_Source_ShootingSystem_Interfaces_GetPlayerController_h_13_SPARSE_DATA \
	ShootingSystem_Source_ShootingSystem_Interfaces_GetPlayerController_h_13_RPC_WRAPPERS \
	ShootingSystem_Source_ShootingSystem_Interfaces_GetPlayerController_h_13_CALLBACK_WRAPPERS \
	ShootingSystem_Source_ShootingSystem_Interfaces_GetPlayerController_h_13_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ShootingSystem_Source_ShootingSystem_Interfaces_GetPlayerController_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ShootingSystem_Source_ShootingSystem_Interfaces_GetPlayerController_h_13_SPARSE_DATA \
	ShootingSystem_Source_ShootingSystem_Interfaces_GetPlayerController_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	ShootingSystem_Source_ShootingSystem_Interfaces_GetPlayerController_h_13_CALLBACK_WRAPPERS \
	ShootingSystem_Source_ShootingSystem_Interfaces_GetPlayerController_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SHOOTINGSYSTEM_API UClass* StaticClass<class UGetPlayerController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ShootingSystem_Source_ShootingSystem_Interfaces_GetPlayerController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
