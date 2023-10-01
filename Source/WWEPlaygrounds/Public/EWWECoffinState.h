#pragma once
#include "CoreMinimal.h"
#include "EWWECoffinState.generated.h"

UENUM(BlueprintType)
enum class EWWECoffinState : uint8 {
    Idle,
    Attack,
    COUNT,
    NONE = 0xFF,
};

