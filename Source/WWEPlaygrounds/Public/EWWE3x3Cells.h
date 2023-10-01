#pragma once
#include "CoreMinimal.h"
#include "EWWE3x3Cells.generated.h"

UENUM(BlueprintType)
enum class EWWE3x3Cells : uint8 {
    LeftBack,
    Back,
    RightBack,
    LeftMiddle,
    Middle,
    RightMiddle,
    LeftFront,
    Front,
    RightFront,
    COUNT,
};

