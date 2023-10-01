#pragma once
#include "CoreMinimal.h"
#include "EWWECampaignNodeType.generated.h"

UENUM(BlueprintType)
enum class EWWECampaignNodeType : uint8 {
    City,
    Wrestler,
    Event,
    Reward,
    Contract,
    KeyEvent,
    COUNT,
};

