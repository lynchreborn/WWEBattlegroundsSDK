#pragma once
#include "CoreMinimal.h"
#include "EWWEDirections.generated.h"

UENUM(BlueprintType)
enum class EWWEDirections : uint8 {
    LEFT,
    RIGHT,
    UP,
    DOWN,
    NONE,
};

