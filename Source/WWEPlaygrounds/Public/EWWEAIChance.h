#pragma once
#include "CoreMinimal.h"
#include "EWWEAIChance.generated.h"

UENUM(BlueprintType)
enum class EWWEAIChance : uint8 {
    NONE,
    Counter,
    Wander,
    TurnbuckleMinigame,
    Block,
    Parry,
    RunningHitBlock,
    AllRounderRunningKick,
    Pin,
    PinReact,
    StandupCounter,
    GroundHitParry,
    RunningHitGroundParry,
    SpringboardGroundParry,
    TopRopesGroundParry,
    SpringboardDodge,
    TopRopesDodge,
    SpecialAttackDefend,
    SpecialAttackParry,
    Signature,
};

