using UnrealBuildTool;

public class WWEPlaygroundsEditorTarget : TargetRules {
	public WWEPlaygroundsEditorTarget(TargetInfo Target) : base(Target) {
		Type = TargetType.Editor;
		ExtraModuleNames.AddRange(new string[] {
			"OnlineSubsystemSteam",
			"PlaygroundsGame",
			"SaberGame",
			"WWECustomCollision",
			"WWEPlaygrounds",
		});
	}
}
