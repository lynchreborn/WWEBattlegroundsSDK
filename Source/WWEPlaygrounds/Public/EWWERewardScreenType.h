#pragma once
#include "CoreMinimal.h"
#include "EWWERewardScreenType.generated.h"

UENUM(BlueprintType)
enum class EWWERewardScreenType : uint8 {
    Numeric,
    PowerUp,
    Vanity,
    ArenaItem,
    Character,
    Arena,
    Skill,
    SkillUpgrade,
    Prestige,
    COUNT,
};

