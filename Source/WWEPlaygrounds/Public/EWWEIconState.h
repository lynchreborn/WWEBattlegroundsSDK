#pragma once
#include "CoreMinimal.h"
#include "EWWEIconState.generated.h"

UENUM(BlueprintType)
enum class EWWEIconState : uint8 {
    NONE,
    Idle,
    Pressed,
    COUNT,
};

