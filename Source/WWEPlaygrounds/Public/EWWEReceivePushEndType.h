#pragma once
#include "CoreMinimal.h"
#include "EWWEReceivePushEndType.generated.h"

UENUM(BlueprintType)
enum class EWWEReceivePushEndType : uint8 {
    None,
    Clash,
    GoToApron,
    FallRing,
    UpDownRing,
    StopRunning,
    TurnbuckleStunned,
    FenceStunned,
};

