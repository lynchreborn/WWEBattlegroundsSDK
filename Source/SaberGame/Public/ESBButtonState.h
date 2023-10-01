#pragma once
#include "CoreMinimal.h"
#include "ESBButtonState.generated.h"

UENUM(BlueprintType)
enum class ESBButtonState : uint8 {
    NONE,
    Idle,
    SelectAnimIn,
    Selected,
    SelectAnimOut,
    COUNT,
};

