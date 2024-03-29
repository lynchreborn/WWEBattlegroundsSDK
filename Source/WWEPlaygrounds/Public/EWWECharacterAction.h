#pragma once
#include "CoreMinimal.h"
#include "EWWECharacterAction.generated.h"

UENUM(BlueprintType)
enum class EWWECharacterAction : uint8 {
    None,
    AutoMove,
    Hit,
    ReceiveHit,
    Grab,
    Grabbed,
    Throw,
    PullFromTurnbuckle,
    Throwed,
    ReceivePullFromTurnbuckle,
    RunningThrow,
    RunningThrowed,
    Dumped,
    StandUp,
    RunningHit,
    ReceiveRunningHit,
    RopesRebound,
    UpDownRing,
    ChargeHit,
    StopChargeHit,
    GroundHit,
    ReceiveGroundHit,
    CounterGrab,
    CounteredGrab,
    RotateTo,
    UpDownTurnbuckle,
    RotateOnTurnbuckle,
    IdleTurnbuckle_DEPRECATED,
    TopRopes,
    ReceiveTopRopes,
    IrishWhip,
    ReceiveIrishWhip,
    BreakBlock,
    Block,
    Pin,
    ReceivePin,
    StandUpStunned,
    AfterIrishWhip,
    Clash,
    FallRing,
    StopRunning,
    ClimbCage,
    CounteractThrow,
    ReceiveCounteractThrow,
    Counteract,
    ReceiveAfterIrishWhip,
    Celebration,
    Shoved,
    PickUp,
    Release,
    ThrowWeaponPressed,
    ThrowWeaponReleased,
    ObjectHit,
    Earthquake,
    CarryCharacter,
    LaunchCharacterPressed,
    LaunchCharacterReleased,
    CarriedByCharacter,
    LaunchedByCharacterPressed,
    LaunchedByCharacterReleased,
    ReceiveStandUpStunned,
    HighFiveTagTeam,
    DropFromCage,
    RopeShake,
    TurnbuckleStun,
    Taunt,
    ReceiveCounteract,
    SignatureMove,
    TurnbuckleMinigameHit,
    Static,
    ActivePowerUp,
    ReceiveTurnbuckleMinigameHit,
    ExitTurnbuckleMinigame,
    ReceiveExitTurnbuckleMinigame,
    ReleaseFromReceiveCarryByCharacter,
    ReceiveReleaseFromReceiveCarryByCharacter,
    CounterCarry,
    ReceiveCounterCarry,
    ThrowInCarry,
    ReceiveThrowInCarry,
    ReceiveStartCarriedByCharacter,
    Springboard,
    ReceiveSpringboard,
    TurnbuckleMinigame,
    TurnbuckleMinigameStunned,
    IrishWhipCounter,
    ReceiveIrishWhipCounter,
    GoToApron,
    GetOutOfApron,
    RotateOnApron,
    UpTurnbuckleFromApron,
    GenericReceiveHit,
    ClimbHelicopter,
    ClimbTopCage,
    ClimbDownTopCage,
    TurnTopCage,
    JumpOffHelicopter,
    ThrowAndSubmission,
    ThrowAndCarry,
    PushToTurnbuckle,
    Wave,
    SuccessionHits,
    COUNT,
};

