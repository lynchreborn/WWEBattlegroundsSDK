#pragma once
#include "CoreMinimal.h"
#include "EWWEAngryRamAction.generated.h"

UENUM(BlueprintType)
enum class EWWEAngryRamAction : uint8 {
    Jump,
    RotateAndJump,
    Attack,
    Stun,
    Walk,
    Rotate,
};

