#pragma once
#include "CoreMinimal.h"
#include "EWWEComparisonType.generated.h"

UENUM(BlueprintType)
enum class EWWEComparisonType : uint8 {
    EqualTo,
    GreaterThan,
    SmallerThan,
    EqualOrGreaterThan,
    EqualOrSmallerThan,
};

