using UnrealBuildTool;

public class WWEPlaygrounds : ModuleRules {
    public WWEPlaygrounds(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "AIModule",
            "AnimGraphRuntime",
            "AnimationCore",
            "AudioMixer",
            "CinematicCamera",
            "Core",
            "CoreUObject",
            "DNA2K",
            "Engine",
            "GameplayTags",
            "GameplayTasks",
            "InputCore",
            "LevelSequence",
            "MediaAssets",
            "MediaUtils",
            "MovieScene",
            "MovieSceneTracks",
            "NakamaUnreal",
            "NavigationSystem",
            "OnlineSubsystemNakama",
            "OnlineSubsystemSaber",
            "Overlay",
            "PlaygroundsGame",
            "PropertyPath",
            "SaberGame",
            "Slate",
            "SlateCore",
            "UMG",
        });
    }
}
