#pragma once
#include "CoreMinimal.h"
#include "EWWEHitCommentSettings.generated.h"

UENUM(BlueprintType)
enum class EWWEHitCommentSettings : uint8 {
    OnHit,
    LastHitCombo,
    BlockedCombo,
    ApronToInside,
    ApronToOutside,
    ApronToApron,
    DrillingPowerUp,
    COUNT,
};

