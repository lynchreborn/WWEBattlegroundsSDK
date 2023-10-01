#pragma once
#include "CoreMinimal.h"
#include "EWWERingRope.generated.h"

UENUM(BlueprintType)
enum class EWWERingRope : uint8 {
    All,
    UpperLeft,
    MidLeft,
    LowerLeft,
    UpperRight,
    MidRight,
    LowerRight,
    UpperFront,
    MidFront,
    LowerFront,
    UpperBack,
    MidBack,
    LowerBack,
};

