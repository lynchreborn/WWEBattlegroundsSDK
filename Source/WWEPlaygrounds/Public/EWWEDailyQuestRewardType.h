#pragma once
#include "CoreMinimal.h"
#include "EWWEDailyQuestRewardType.generated.h"

UENUM(BlueprintType)
enum class EWWEDailyQuestRewardType : uint8 {
    NONE,
    Experience,
    SoftCurrency,
    HardCurrency,
    VanityItem,
    COUNT,
};

