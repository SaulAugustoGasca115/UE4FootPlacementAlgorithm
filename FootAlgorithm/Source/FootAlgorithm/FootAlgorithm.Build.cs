// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class FootAlgorithm : ModuleRules
{
	public FootAlgorithm(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
