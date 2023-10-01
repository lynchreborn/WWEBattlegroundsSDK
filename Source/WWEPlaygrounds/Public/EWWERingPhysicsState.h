#pragma once
#include "CoreMinimal.h"
#include "EWWERingPhysicsState.generated.h"

UENUM(BlueprintType)
enum class EWWERingPhysicsState : uint8 {
    Normal,
    Relaxed,
    Destroyed,
};

