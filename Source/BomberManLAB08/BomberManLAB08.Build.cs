// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class BomberManLAB08 : ModuleRules
{
	public BomberManLAB08(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
