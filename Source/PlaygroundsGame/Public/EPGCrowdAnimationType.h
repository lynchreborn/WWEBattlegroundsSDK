#pragma once
#include "CoreMinimal.h"
#include "EPGCrowdAnimationType.generated.h"

UENUM(BlueprintType)
enum class EPGCrowdAnimationType : uint8 {
    None,
    Idle,
    Celebration,
    Disappointment,
};

