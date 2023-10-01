using UnrealBuildTool;

public class WWEPlaygroundsGameTarget : TargetRules {
	public WWEPlaygroundsGameTarget(TargetInfo Target) : base(Target) {
		Type = TargetType.Game;
		ExtraModuleNames.AddRange(new string[] {
			"OnlineSubsystemSteam",
			"PlaygroundsGame",
			"SaberGame",
			"WWECustomCollision",
			"WWEPlaygrounds",
		});
	}
}
