#pragma once
#include "CoreMinimal.h"
#include "EPGMatchDifficultyConfigs.generated.h"

UENUM(BlueprintType)
enum class EPGMatchDifficultyConfigs : uint8 {
    Rookie,
    Medium,
    Hard,
    Maximum,
    COUNT,
};

