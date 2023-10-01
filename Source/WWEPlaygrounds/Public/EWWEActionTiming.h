#pragma once
#include "CoreMinimal.h"
#include "EWWEActionTiming.generated.h"

UENUM(BlueprintType)
enum class EWWEActionTiming : uint8 {
    OnActionHit,
    OnActionEnd,
    OnActionEndAndSuccess,
};

