#pragma once
#include "CoreMinimal.h"
#include "EPGMassiveCrowdAnimationType.generated.h"

UENUM(BlueprintType)
enum class EPGMassiveCrowdAnimationType : uint8 {
    None,
    Idle,
    Celebration,
    Disappointment,
};

