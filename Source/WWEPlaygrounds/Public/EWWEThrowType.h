#pragma once
#include "CoreMinimal.h"
#include "EWWEThrowType.generated.h"

UENUM(BlueprintType)
enum class EWWEThrowType : uint8 {
    Regular,
    Combo,
    Irish,
    PowerUp,
    FenceStunned,
    TurnbuckleStunnedAfterIrishWhip,
    FromApronToApron,
    ToApron,
    FromApronToTurnbuckle,
    FromApronToRing,
    ToTurnbuckle,
};

