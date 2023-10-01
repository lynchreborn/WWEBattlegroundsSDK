#pragma once
#include "CoreMinimal.h"
#include "EPGDailyQuestRewardType.generated.h"

UENUM(BlueprintType)
enum class EPGDailyQuestRewardType : uint8 {
    NONE,
    Experience,
    SoftCurrency,
    HardCurrency,
    VanityItem,
    LevelUpDiamond,
    Pack,
    COUNT,
};

