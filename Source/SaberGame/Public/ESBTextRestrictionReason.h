#pragma once
#include "CoreMinimal.h"
#include "ESBTextRestrictionReason.generated.h"

UENUM(BlueprintType)
enum class ESBTextRestrictionReason : uint8 {
    None,
    MinLength,
    MaxLength,
    CapitalStyleUpper,
    CapitalStyleLower,
    Profanity,
    Symbols,
    Number,
    COUNT,
};

