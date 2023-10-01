#pragma once
#include "CoreMinimal.h"
#include "EWWEPinCommentSettings.generated.h"

UENUM(BlueprintType)
enum class EWWEPinCommentSettings : uint8 {
    Start,
    StartHighHealth,
    StartLowHealth,
    Release,
    ReleaseHighHealth,
    ReleaseLowHealth,
    Success,
    Count0,
    Count1,
    Count2,
    StartWithPowerUp,
    SuccessWithPowerUp,
    ReleaseWithPowerUp,
    COUNT,
};

