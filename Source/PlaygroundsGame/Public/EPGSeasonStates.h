#pragma once
#include "CoreMinimal.h"
#include "EPGSeasonStates.generated.h"

UENUM(BlueprintType)
enum class EPGSeasonStates : uint8 {
    Regular,
    RegularFailed,
    PlayOff,
    PlayOffFailed,
    Final,
    Finished,
    COUNT,
};

