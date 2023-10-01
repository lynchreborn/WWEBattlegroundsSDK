#pragma once
#include "CoreMinimal.h"
#include "EWWEEnterRingCountOut.generated.h"

UENUM(BlueprintType)
enum class EWWEEnterRingCountOut : uint8 {
    No,
    Three,
    Five,
    Ten,
    COUNT,
};

