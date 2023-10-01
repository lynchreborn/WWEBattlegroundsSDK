#pragma once
#include "CoreMinimal.h"
#include "EWWECampaignNodeStatus.generated.h"

UENUM(BlueprintType)
enum class EWWECampaignNodeStatus : uint8 {
    Locked,
    Unlocked,
    Completed,
    LockedCurrency,
    Unknown,
};

