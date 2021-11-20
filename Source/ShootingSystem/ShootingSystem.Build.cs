// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class ShootingSystem : ModuleRules
{
	public ShootingSystem(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay", "ShootingMechanic", "ShootingMechanicEditors" });
		PublicIncludePaths.AddRange(new string[]
		{
			"ShootingMechanic/Private", "ShootingMechanic/Public",
			"ShootingMechanic/Interfaces","ShootingMechanic/Interfaces/Public","ShootingMechanic/Interfaces/Private",
			"ShootingMechanic/Player","ShootingMechanic/Player/Public","ShootingMechanic/Player/Private",
			"ShootingMechanic/Weapon","ShootingMechanic/Weapon/Public","ShootingMechanic/Weapon/Private",
		});
	}
}
