#pragma once
#include "CoreMinimal.h"
#include "EWWERotateSpeed.generated.h"

UENUM(BlueprintType)
enum class EWWERotateSpeed : uint8 {
    Walk,
    ReceiveHit,
    RotateTo,
    UpDownRing,
    Fly,
    Flash,
    Variable,
};

