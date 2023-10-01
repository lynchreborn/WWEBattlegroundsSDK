#pragma once
#include "CoreMinimal.h"
#include "EShopErrorResult.generated.h"

UENUM(BlueprintType)
enum class EShopErrorResult : uint8 {
    Success,
    Failure,
    InvalidShopData,
    InvalidPrice,
    NotEnoughtVirtualCurrency,
    Unexpected,
};

