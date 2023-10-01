#pragma once
#include "CoreMinimal.h"
#include "EPGDailyQuestState.generated.h"

UENUM(BlueprintType)
enum class EPGDailyQuestState : uint8 {
    NONE,
    IN_PROGRESS,
    COMPLETED,
    CLAIMED,
    COUNT,
};

