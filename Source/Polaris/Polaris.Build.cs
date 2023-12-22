using UnrealBuildTool;

public class Polaris : ModuleRules {
    public Polaris(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "AkAudio",
            "AnimGraphRuntime",
            "CatwalkCloth",
            "CatwalkClothInterface",
            "CinematicCamera",
            "Core",
            "CoreUObject",
            "CriWareRuntime",
            "Engine",
            "GFur",
            "GameplayTags",
            "LevelSequence",
            "MotHeadAnimationRuntime",
            "MovieScene",
            "Niagara",
            "NiagaraAnimNotifies",
            "PhysicsCore",
            "Slate",
            "SlateCore",
            "UMG",
        });
    }
}
