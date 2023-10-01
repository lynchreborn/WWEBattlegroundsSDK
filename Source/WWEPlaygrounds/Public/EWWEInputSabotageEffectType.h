#pragma once
#include "CoreMinimal.h"
#include "EWWEInputSabotageEffectType.generated.h"

UENUM(BlueprintType)
enum class EWWEInputSabotageEffectType : uint8 {
    None,
    IncreaseQuantity,
    DecreaseQuantity,
    COUNT,
};

