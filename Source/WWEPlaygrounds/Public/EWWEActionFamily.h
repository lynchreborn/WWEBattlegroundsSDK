#pragma once
#include "CoreMinimal.h"
#include "EWWEActionFamily.generated.h"

UENUM(BlueprintType)
enum class EWWEActionFamily : uint8 {
    None,
    Hits,
    Counters,
    Throws,
    Taunts,
    Signatures,
    Specials,
    COUNT,
};

