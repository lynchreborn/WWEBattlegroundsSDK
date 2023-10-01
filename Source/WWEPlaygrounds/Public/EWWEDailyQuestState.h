#pragma once
#include "CoreMinimal.h"
#include "EWWEDailyQuestState.generated.h"

UENUM(BlueprintType)
enum class EWWEDailyQuestState : uint8 {
    NONE,
    InProgress,
    Completed,
    COUNT,
};

