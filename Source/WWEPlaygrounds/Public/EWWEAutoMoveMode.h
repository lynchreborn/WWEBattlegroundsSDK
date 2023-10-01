#pragma once
#include "CoreMinimal.h"
#include "EWWEAutoMoveMode.generated.h"

UENUM(BlueprintType)
enum class EWWEAutoMoveMode : uint8 {
    None,
    TargetRival,
    CenterOfLevel,
    ClosestRingWall,
    ClosestRingCorner,
    CurrentLevelEvent,
    ClosestInteractableWeapon,
    Custom,
    ClosestTurnbuckleApron,
    ClosestEntryPoint,
};

