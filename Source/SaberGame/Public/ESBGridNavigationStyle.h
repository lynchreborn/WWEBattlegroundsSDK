#pragma once
#include "CoreMinimal.h"
#include "ESBGridNavigationStyle.generated.h"

UENUM(BlueprintType)
enum class ESBGridNavigationStyle : uint8 {
    Grid,
    GridMemory,
    Engine,
    COUNT,
};

