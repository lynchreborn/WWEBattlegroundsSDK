#pragma once
#include "CoreMinimal.h"
#include "EWWEActionRarity.generated.h"

UENUM(BlueprintType)
enum class EWWEActionRarity : uint8 {
    Common,
    Special,
    Unique,
    COUNT,
};

