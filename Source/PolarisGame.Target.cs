using UnrealBuildTool;

public class PolarisGameTarget : TargetRules {
	public PolarisGameTarget(TargetInfo Target) : base(Target) {
		Type = TargetType.Game;
		ExtraModuleNames.AddRange(new string[] {
			"Polaris",
		});
	}
}
