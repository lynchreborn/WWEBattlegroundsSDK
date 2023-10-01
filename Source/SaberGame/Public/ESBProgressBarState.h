#pragma once
#include "CoreMinimal.h"
#include "ESBProgressBarState.generated.h"

UENUM(BlueprintType)
enum class ESBProgressBarState : uint8 {
    Empty,
    Complete,
    Filling,
    HalfFilled,
};

