#pragma once
#include "CoreMinimal.h"
#include "ESBPauseTransitionState.generated.h"

UENUM(BlueprintType)
enum class ESBPauseTransitionState : uint8 {
    None,
    PauseIn,
    PauseOut,
};

