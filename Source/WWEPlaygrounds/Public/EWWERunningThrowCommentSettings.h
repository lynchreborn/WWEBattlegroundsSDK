#pragma once
#include "CoreMinimal.h"
#include "EWWERunningThrowCommentSettings.generated.h"

UENUM(BlueprintType)
enum class EWWERunningThrowCommentSettings : uint8 {
    Throw,
    ThrowAfterRebound,
    CounterRunningThrow,
    CounterRunningThrowAfterRebound,
    ThrowHeavy,
    COUNT,
};

