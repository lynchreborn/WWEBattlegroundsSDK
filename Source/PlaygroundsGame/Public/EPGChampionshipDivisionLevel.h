#pragma once
#include "CoreMinimal.h"
#include "EPGChampionshipDivisionLevel.generated.h"

UENUM(BlueprintType)
enum class EPGChampionshipDivisionLevel : uint8 {
    V,
    IV,
    III,
    II,
    I,
    COUNT,
};

