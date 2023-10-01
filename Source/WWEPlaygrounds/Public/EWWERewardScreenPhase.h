#pragma once
#include "CoreMinimal.h"
#include "EWWERewardScreenPhase.generated.h"

UENUM(BlueprintType)
enum class EWWERewardScreenPhase : uint8 {
    Init,
    NumericReward,
    ObjectReward,
    ArenaReward,
    SkillReward,
    PrestigeReward,
    Finished,
    COUNT,
};

