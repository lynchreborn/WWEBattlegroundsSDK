#pragma once
#include "CoreMinimal.h"
#include "EWWEStatsGroup.generated.h"

UENUM(BlueprintType)
enum class EWWEStatsGroup : uint8 {
    StandardHit,
    StrongHit,
    Throw,
    Item,
    Special,
    NoGroup,
    COUNT,
};

