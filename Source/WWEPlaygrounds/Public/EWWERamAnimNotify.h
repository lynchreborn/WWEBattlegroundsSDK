#pragma once
#include "CoreMinimal.h"
#include "EWWERamAnimNotify.generated.h"

UENUM(BlueprintType)
enum class EWWERamAnimNotify : uint8 {
    None,
    MovementModeWalk,
    EnableInput,
};

