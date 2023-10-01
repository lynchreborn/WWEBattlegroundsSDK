#pragma once
#include "CoreMinimal.h"
#include "EPGDailyQuestRewardSource.generated.h"

UENUM(BlueprintType)
enum class EPGDailyQuestRewardSource : uint8 {
    NONE,
    DAILYQUEST,
    DAILYQUESTBAR,
};

