#pragma once
#include "CoreMinimal.h"
#include "ESBPoolGridDirection.generated.h"

UENUM(BlueprintType)
enum class ESBPoolGridDirection : uint8 {
    Horizontal,
    Vertical,
    Diagonal,
    NONE,
};

