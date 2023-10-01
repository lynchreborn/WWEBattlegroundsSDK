#pragma once
#include "CoreMinimal.h"
#include "EPGRandomPlayerBlendMode.generated.h"

UENUM(BlueprintType)
enum class EPGRandomPlayerBlendMode : uint8 {
    CurrentEndWithNextStart,
    CurrentStartWithNextStart,
};

