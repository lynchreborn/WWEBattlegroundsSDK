#pragma once
#include "CoreMinimal.h"
#include "EWWETierSlotType.generated.h"

UENUM(BlueprintType)
enum class EWWETierSlotType : uint8 {
    TierOne,
    TierTwo,
    TierThree,
    COUNT,
    NONE = 0xFF,
};

