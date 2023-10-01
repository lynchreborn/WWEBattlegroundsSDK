#pragma once
#include "CoreMinimal.h"
#include "EPGCrowdSupportType.generated.h"

UENUM(BlueprintType)
enum class EPGCrowdSupportType : uint8 {
    LOCAL,
    VISITOR,
    NEUTRAL,
    COUNT,
};

