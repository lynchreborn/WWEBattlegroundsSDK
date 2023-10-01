#pragma once
#include "CoreMinimal.h"
#include "EWWEInputActionCategory.generated.h"

UENUM(BlueprintType)
enum class EWWEInputActionCategory : uint8 {
    Default,
    GamePause,
    SwitchControl,
};

