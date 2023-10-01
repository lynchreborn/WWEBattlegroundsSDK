#pragma once
#include "CoreMinimal.h"
#include "EWWEInterestFactor.generated.h"

UENUM(BlueprintType)
enum class EWWEInterestFactor : uint8 {
    Low,
    Mid,
    High,
    COUNT,
};

