#pragma once
#include "CoreMinimal.h"
#include "ESBItemRarity.generated.h"

UENUM(BlueprintType)
enum class ESBItemRarity : uint8 {
    Common,
    Epic,
    Legendary,
    VIP,
    COUNT,
};

