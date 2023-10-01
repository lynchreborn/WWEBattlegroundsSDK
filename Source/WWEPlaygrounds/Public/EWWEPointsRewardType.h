#pragma once
#include "CoreMinimal.h"
#include "EWWEPointsRewardType.generated.h"

UENUM()
enum class EWWEPointsRewardType : uint32 {
    UserExperience,
    SoftCurrency,
    HardCurrency,
    RetryTokens,
    COUNT,
};

