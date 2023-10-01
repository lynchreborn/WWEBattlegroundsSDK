#pragma once
#include "CoreMinimal.h"
#include "EWWERopeMode.generated.h"

UENUM(BlueprintType)
enum class EWWERopeMode : uint8 {
    Regular,
    Relaxed,
    Detached,
};

