#pragma once
#include "CoreMinimal.h"
#include "ESBQuestRewardType.generated.h"

UENUM(BlueprintType)
enum class ESBQuestRewardType : uint8 {
    None,
    ExpPoints,
    SoftCurrency,
    HardCurrency,
    VanityItem,
    LevelUpMax,
};

