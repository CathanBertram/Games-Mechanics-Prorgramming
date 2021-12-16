#pragma once


/**
 * 
 */
UENUM()
enum class WeaponModuleType : uint8
{
 Default UMETA(DisplayName = "Default"),
 FireMode  UMETA(DisplayName = "Fire Mode"),
 Shoot UMETA(DisplayName = "Shoot Type"),
 OnFire UMETA(DisplayName = "OnFire Type"),
 OnHit UMETA(DisplayName = "OnHit Type")
};

