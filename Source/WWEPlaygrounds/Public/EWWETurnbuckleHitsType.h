#pragma once
#include "CoreMinimal.h"
#include "EWWETurnbuckleHitsType.generated.h"

UENUM(BlueprintType)
enum class EWWETurnbuckleHitsType : uint8 {
    Combo,
    Recover,
    COUNT,
};

