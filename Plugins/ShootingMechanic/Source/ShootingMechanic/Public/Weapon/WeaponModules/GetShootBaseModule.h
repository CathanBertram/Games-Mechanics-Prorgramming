// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "GetShootBaseModule.generated.h"

// This class does not need to be modified.
UINTERFACE()
class UGetShootBaseModule : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class SHOOTINGMECHANIC_API IGetShootBaseModule
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	class UShoot_Base* GetShootBaseModule();
};

// This class does not need to be modified.
UINTERFACE()
class UGetFireModeBaseModule : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class SHOOTINGMECHANIC_API IGetFireModeBaseModule
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
	public:
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	class UFireModeModuleBase* GetFireModeBaseModule();
};

// This class does not need to be modified.
UINTERFACE()
class UGetOnFireBaseModule : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class SHOOTINGMECHANIC_API IGetOnFireBaseModule
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
	public:
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	class UOnFireModuleBase* GetOnFireModule();
};

// This class does not need to be modified.
UINTERFACE()
class UGetOnHitBaseModule : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class SHOOTINGMECHANIC_API IGetOnHitBaseModule
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
	public:
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	class UOnHitModuleBase* GetOnHitModule();
};