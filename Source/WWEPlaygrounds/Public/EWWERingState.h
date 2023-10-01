#pragma once
#include "CoreMinimal.h"
#include "EWWERingState.generated.h"

UENUM(BlueprintType)
enum class EWWERingState : uint8 {
    Idle,
    InDestruction,
    Destroyed,
};

