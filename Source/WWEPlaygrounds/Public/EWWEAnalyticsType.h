#pragma once
#include "CoreMinimal.h"
#include "EWWEAnalyticsType.generated.h"

UENUM(BlueprintType)
enum class EWWEAnalyticsType : uint8 {
    Match,
    Matchmaking,
    Resources,
    Purchases,
    Progression,
    Design,
    COUNT,
};

