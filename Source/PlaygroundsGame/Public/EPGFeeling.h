#pragma once
#include "CoreMinimal.h"
#include "EPGFeeling.generated.h"

UENUM(BlueprintType)
enum class EPGFeeling : uint8 {
    Happy,
    Proud,
    Pain,
    Shocked,
    Angry,
    Exhausted,
    COUNT,
};

