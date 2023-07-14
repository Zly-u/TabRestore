// Copyright Theliraan, 2023. All Rights Reserved.

using UnrealBuildTool;

public class TabRestore : ModuleRules
{
    public TabRestore(ReadOnlyTargetRules Target) : base( Target )
    {
        bEnableUndefinedIdentifierWarnings = false;
        bLegacyPublicIncludePaths = false;

        PrivateDependencyModuleNames.AddRange(new string[]
        {
            "AssetManagerEditor",
            "Core",
            "CoreUObject",
            "EditorStyle",
            "Engine",
            "InputCore",
            "MainFrame",
            "Slate",
            "SlateCore",
            "UnrealEd"
        });
    }
}
