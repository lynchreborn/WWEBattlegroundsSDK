#pragma once
#include "CoreMinimal.h"
#include "EWWEGameplayState.generated.h"

UENUM(BlueprintType)
enum class EWWEGameplayState : uint8 {
    None,
    Aborted,
    Finished,
    FightingAndMoving,
};

