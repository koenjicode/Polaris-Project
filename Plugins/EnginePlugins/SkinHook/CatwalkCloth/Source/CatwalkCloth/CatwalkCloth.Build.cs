using UnrealBuildTool;

public class CatwalkCloth : ModuleRules {
    public CatwalkCloth(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "CatwalkClothInterface",
            "Core",
            "CoreUObject",
            "Engine",
        });
    }
}
