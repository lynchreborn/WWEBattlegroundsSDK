#pragma once
#include "CoreMinimal.h"
#include "EPGChampionshipReward.generated.h"

UENUM(BlueprintType)
enum class EPGChampionshipReward : uint8 {
    Unknown,
    PromotionEnter,
    PromotionWin,
    PromotionLose,
    DemotionEnter,
    DemotionWin,
    DemotionLose,
    COUNT,
};

