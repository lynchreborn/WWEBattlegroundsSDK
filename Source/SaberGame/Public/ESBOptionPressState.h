#pragma once
#include "CoreMinimal.h"
#include "ESBOptionPressState.generated.h"

UENUM(BlueprintType)
enum class ESBOptionPressState : uint8 {
    NONE,
    FirstStep,
    SecondStep,
    Step,
};

