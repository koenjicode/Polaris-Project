using UnrealBuildTool;

public class PolarisEditorTarget : TargetRules {
	public PolarisEditorTarget(TargetInfo Target) : base(Target) {
		Type = TargetType.Editor;
		ExtraModuleNames.AddRange(new string[] {
			"Polaris",
			"PolarisEditor"
		});
	}
}
