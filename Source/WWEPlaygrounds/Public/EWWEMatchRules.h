#pragma once
#include "CoreMinimal.h"
#include "EWWEMatchRules.generated.h"

UENUM(BlueprintType)
enum class EWWEMatchRules : uint8 {
    None,
    Pin,
    CountOut,
    EnterRingCountOut,
    MoneyLimit,
    NumberOfWrestlers,
    COUNT,
};

