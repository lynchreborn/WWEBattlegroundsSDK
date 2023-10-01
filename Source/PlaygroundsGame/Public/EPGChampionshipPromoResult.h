#pragma once
#include "CoreMinimal.h"
#include "EPGChampionshipPromoResult.generated.h"

UENUM(BlueprintType)
enum class EPGChampionshipPromoResult : uint8 {
    None,
    Defeat,
    Victory,
    COUNT,
};

