#pragma once
#include "CoreMinimal.h"
#include "EWWEDailyQuestsRewardsScreenStatus.generated.h"

UENUM(BlueprintType)
enum class EWWEDailyQuestsRewardsScreenStatus : uint8 {
    ShowingAnimations,
    ShowingAnimationsEnd,
    ShowingExpCoinsRewards,
    ShowingLevelUpRewards,
    ShowingItemRewards,
};

