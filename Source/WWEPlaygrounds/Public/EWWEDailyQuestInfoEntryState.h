#pragma once
#include "CoreMinimal.h"
#include "EWWEDailyQuestInfoEntryState.generated.h"

UENUM(BlueprintType)
enum class EWWEDailyQuestInfoEntryState : uint8 {
    NONE,
    Disabled,
    InProgress,
    Completed,
    CashedIn,
    COUNT,
};

