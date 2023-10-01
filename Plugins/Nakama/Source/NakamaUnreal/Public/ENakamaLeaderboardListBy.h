#pragma once
#include "CoreMinimal.h"
#include "ENakamaLeaderboardListBy.generated.h"

UENUM(BlueprintType)
enum class ENakamaLeaderboardListBy : uint8 {
    BY_SCORE,
    BY_FRIENDS,
    BY_MAX UMETA(Hidden),
};

