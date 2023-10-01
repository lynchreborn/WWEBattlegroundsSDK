#pragma once
#include "CoreMinimal.h"
#include "EWWEHelicopterEventState.generated.h"

UENUM(BlueprintType)
enum class EWWEHelicopterEventState : uint8 {
    IdleLeftRight,
    IdleRightLeft,
    PreparingForEvent,
    WaitingForEventInteraction,
    Event,
    EventExit,
    Wait,
    WaitInput,
    COUNT,
    NONE = 0xFF,
};

