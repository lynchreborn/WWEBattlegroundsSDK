#pragma once
#include "CoreMinimal.h"
#include "EWWEPowerUpLevels.generated.h"

UENUM(BlueprintType)
enum class EWWEPowerUpLevels : uint8 {
    None,
    Bronze,
    Silver,
    Gold,
    Count,
};

