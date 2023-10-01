#pragma once
#include "CoreMinimal.h"
#include "EPGSeasonPlayOffStates.generated.h"

UENUM(BlueprintType)
enum class EPGSeasonPlayOffStates : uint8 {
    Round8th,
    Round4th,
    RoundSemi,
    Final,
    COUNT,
};

