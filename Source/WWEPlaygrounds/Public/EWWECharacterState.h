#pragma once
#include "CoreMinimal.h"
#include "EWWECharacterState.generated.h"

UENUM(BlueprintType)
enum class EWWECharacterState : uint8 {
    None,
    Fighting,
    OnApron,
    OnTurnbuckle,
    OnCageWall,
    OnCageTop,
    OnHelicopter,
    OnHelicopterFall,
    SpecialMatchLose,
    WaitingOutsideRing,
    Frozen,
    PlayingBagpipes,
    AffectedByBagpipes,
    ControllingRam,
    SpecialMatchSpawnedAndWaitingToFight,
};

