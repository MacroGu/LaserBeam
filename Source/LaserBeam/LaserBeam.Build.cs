// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class LaserBeam : ModuleRules
{
	public LaserBeam(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
