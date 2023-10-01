#pragma once
#include "CoreMinimal.h"
#include "EWWERotateMode.generated.h"

UENUM(BlueprintType)
enum class EWWERotateMode : uint8 {
    None,
    TargetRival,
    CenterOfLevel,
    ClosestRingWall,
    ClosestRingCorner,
    AlignWithCenterOfRing,
    AlignWithInstigatorHead,
    CurrentLevelEvent,
    LocationToRotate,
    InteractableWeapon,
};

