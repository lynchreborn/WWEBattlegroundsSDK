#pragma once
#include "CoreMinimal.h"
#include "EWWERunningHitType.generated.h"

UENUM(BlueprintType)
enum class EWWERunningHitType : uint8 {
    Punch,
    Kick,
    Dumped,
    AgainstTurnbuckle,
    ThroughRopes,
    COUNT,
};

