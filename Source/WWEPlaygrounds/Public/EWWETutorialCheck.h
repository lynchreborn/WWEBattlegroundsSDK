#pragma once
#include "CoreMinimal.h"
#include "EWWETutorialCheck.generated.h"

UENUM(BlueprintType)
enum class EWWETutorialCheck : uint8 {
    None,
    MeleeRange,
    Counter,
    Block,
    Parry,
    CanUpTurnbuckle,
    Signature,
    PowerUp,
    CanHit,
    ComboFirstHit,
    ComboSecondHit,
    ComboThirdHit,
    CanTopRopes,
    CanHitAndHighStamina,
    CanGrab,
    COUNT,
};

