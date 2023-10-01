#pragma once
#include "CoreMinimal.h"
#include "EPGDailyQuestConditionalOperator.generated.h"

UENUM(BlueprintType)
enum class EPGDailyQuestConditionalOperator : uint8 {
    Unknown,
    EQUAL_TO,
    NOT_EQUAL_TO,
    GREATER_THAN,
    LOWER_THAN,
    GREATER_OR_EQUAL_THAN,
    LOWER_OR_EQUAL_THAN,
    NONE,
    ANY,
    ALL,
};

