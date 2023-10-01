#pragma once
#include "CoreMinimal.h"
#include "EMatchFinishConditionType.generated.h"

UENUM(BlueprintType)
enum class EMatchFinishConditionType : uint8 {
    Normal,
    Abandoned,
    Aborted,
};

