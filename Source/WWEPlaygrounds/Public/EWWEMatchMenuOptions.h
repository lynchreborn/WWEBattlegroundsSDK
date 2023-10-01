#pragma once
#include "CoreMinimal.h"
#include "EWWEMatchMenuOptions.generated.h"

UENUM(BlueprintType)
enum class EWWEMatchMenuOptions : uint8 {
    None,
    Pin,
    CountOut,
    EnterRingCountOut,
    MoneyLimit,
    NumberOfWrestlers,
    RingWeapons,
    SpectatorWeapons,
    InteractiveMapItems,
    PowerUps,
    DestructibleRing,
    ElectrifiedWalls,
    COUNT,
};

