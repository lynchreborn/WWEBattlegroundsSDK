#pragma once
#include "CoreMinimal.h"
#include "EWWECurrencyType.generated.h"

UENUM(BlueprintType)
enum class EWWECurrencyType : uint8 {
    Hard,
    Soft,
    COUNT,
};

