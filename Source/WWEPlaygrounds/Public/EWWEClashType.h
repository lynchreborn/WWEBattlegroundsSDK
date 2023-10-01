#pragma once
#include "CoreMinimal.h"
#include "EWWEClashType.generated.h"

UENUM(BlueprintType)
enum class EWWEClashType : uint8 {
    Wall,
    Turnbuckle,
    Floor,
    OnAir,
    TurnbuckleStunned,
    ElectrocutedCage,
    COUNT,
};

