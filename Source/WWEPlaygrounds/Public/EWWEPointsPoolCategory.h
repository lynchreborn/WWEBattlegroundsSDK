#pragma once
#include "CoreMinimal.h"
#include "EWWEPointsPoolCategory.generated.h"

UENUM()
enum class EWWEPointsPoolCategory : uint32 {
    UserPool,
    SoftCurrencyPool,
    HardCurrencyPool,
    COUNT,
};

