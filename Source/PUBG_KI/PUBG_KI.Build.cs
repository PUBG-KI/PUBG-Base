// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class PUBG_KI : ModuleRules
{
	public PUBG_KI(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
