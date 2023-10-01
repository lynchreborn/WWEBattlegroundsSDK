#pragma once
#include "CoreMinimal.h"
#include "EWWEMatchConfiguration.generated.h"

UENUM(BlueprintType)
enum class EWWEMatchConfiguration : uint8 {
    None,
    Weapons,
    InteractiveMapItems,
    PowerUps,
    DestructibleRing,
    ElectrifiedWalls,
    COUNT,
};

