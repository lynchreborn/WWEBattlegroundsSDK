#pragma once
#include "CoreMinimal.h"
#include "EWWEAngryRamState.generated.h"

UENUM(BlueprintType)
enum class EWWEAngryRamState : uint8 {
    None,
    Fighting,
    Jumping,
    Stunned,
    Attacking,
    Rotating,
};

