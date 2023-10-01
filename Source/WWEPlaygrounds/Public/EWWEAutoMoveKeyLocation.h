#pragma once
#include "CoreMinimal.h"
#include "EWWEAutoMoveKeyLocation.generated.h"

UENUM(BlueprintType)
enum class EWWEAutoMoveKeyLocation : uint8 {
    None,
    ClosestRopesToRebound,
    FarthestRopesToRebound,
    ClosestRingWall,
    TargetRival,
    RingCenter,
};

