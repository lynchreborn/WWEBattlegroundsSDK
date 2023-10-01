#pragma once
#include "CoreMinimal.h"
#include "EWWEPowerUpWidgetState.generated.h"

UENUM(BlueprintType)
enum class EWWEPowerUpWidgetState : uint8 {
    WaitingState,
    JoiningState,
    FightingState,
};

