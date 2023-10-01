#pragma once
#include "CoreMinimal.h"
#include "EWWEDistanceHandleVariable.generated.h"

UENUM(BlueprintType)
enum class EWWEDistanceHandleVariable : uint8 {
    None,
    Grab,
    UpTurnbuckle,
    ReboundRopes,
    GetOutOfTheRing,
    RunningHit,
    GroundHit,
    COUNT,
};

