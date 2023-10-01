#pragma once
#include "CoreMinimal.h"
#include "EWWECrocodileEventState.generated.h"

UENUM(BlueprintType)
enum class EWWECrocodileEventState : uint8 {
    Idle,
    NearAttack,
    AirAttack,
    COUNT,
    NONE = 0xFF,
};

