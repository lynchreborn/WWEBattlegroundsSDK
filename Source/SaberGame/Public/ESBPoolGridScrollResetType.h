#pragma once
#include "CoreMinimal.h"
#include "ESBPoolGridScrollResetType.generated.h"

UENUM(BlueprintType)
enum class ESBPoolGridScrollResetType : uint8 {
    TopLeft,
    Top,
    TopRight,
    Left,
    Center,
    Right,
    BottomLeft,
    Bottom,
    BottomRight,
};

