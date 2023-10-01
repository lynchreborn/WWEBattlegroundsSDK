#pragma once
#include "CoreMinimal.h"
#include "EWWECountOut.generated.h"

UENUM(BlueprintType)
enum class EWWECountOut : uint8 {
    No,
    Three,
    Five,
    Ten,
    Fifteen,
    Twenty,
    COUNT,
};

