#pragma once
#include "CoreMinimal.h"
#include "ESBPauseTransitionContext.generated.h"

UENUM(BlueprintType)
enum class ESBPauseTransitionContext : uint8 {
    None,
    Reset,
};

