#pragma once
#include "CoreMinimal.h"
#include "EWWEPowerAction.generated.h"

UENUM(BlueprintType)
enum class EWWEPowerAction : uint8 {
    None,
    Soft,
    Medium,
    Hard,
    COUNT,
};

