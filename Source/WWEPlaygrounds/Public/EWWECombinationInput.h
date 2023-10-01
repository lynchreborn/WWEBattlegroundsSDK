#pragma once
#include "CoreMinimal.h"
#include "EWWECombinationInput.generated.h"

UENUM(BlueprintType)
enum class EWWECombinationInput : uint8 {
    Up,
    Right,
    Bottom,
    Left,
    R1,
    COUNT,
};

