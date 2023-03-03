// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Telihold : ModuleRules
{
	public Telihold(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay","UMG","Slate" });

		PrivateIncludePaths.Add("Telihold");
	}
}
