#pragma once
#include "CoreMinimal.h"
#include "EWWEActionNodeResult.generated.h"

UENUM(BlueprintType)
enum class EWWEActionNodeResult : uint8 {
    Succeeded,
    Failed,
    Aborted,
    AbortedByCapsuleCollision,
    AbortedByHit,
    AbortedByPlayer,
    AbortedByRingTrigger,
    AbortedByRingEntry,
};

