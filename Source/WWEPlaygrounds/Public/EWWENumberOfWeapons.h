#pragma once
#include "CoreMinimal.h"
#include "EWWENumberOfWeapons.generated.h"

UENUM(BlueprintType)
enum class EWWENumberOfWeapons : uint8 {
    No,
    Three,
    Five,
    Eight,
    Ten,
    Unlimited,
    COUNT,
};

