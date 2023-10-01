#pragma once
#include "CoreMinimal.h"
#include "ESBQuestConditionalOperator.generated.h"

UENUM(BlueprintType)
enum class ESBQuestConditionalOperator : uint8 {
    Unknown,
    EqualTo,
    NotEqualTo,
    GreaterThan,
    LowerThan,
    GreaterThanOrEqualTo,
    LowerThanOrEqualTo,
    None,
    Any,
    All,
};

