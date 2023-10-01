#pragma once
#include "CoreMinimal.h"
#include "EWWECombinationActionType.generated.h"

UENUM(BlueprintType)
enum class EWWECombinationActionType : uint8 {
    Normal,
    Hit,
    Throw,
    NormalWithPriority,
    ThrowWithCombinationModeEnabled,
    COUNT,
};

