#pragma once
#include "CoreMinimal.h"
#include "EPGChampionshipDivisionState.generated.h"

UENUM(BlueprintType)
enum class EPGChampionshipDivisionState : uint8 {
    Regular,
    Promotion,
    Demotion,
    COUNT,
};

