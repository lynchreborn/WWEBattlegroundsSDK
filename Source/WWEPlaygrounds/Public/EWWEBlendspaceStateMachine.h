#pragma once
#include "CoreMinimal.h"
#include "EWWEBlendspaceStateMachine.generated.h"

UENUM(BlueprintType)
enum class EWWEBlendspaceStateMachine : uint8 {
    None,
    Idle,
    Walk,
    Run,
    RunStumble,
    WalkOnApron,
    WalkOnApronInverseRight,
    WalkOnApronInverseLeft,
    Climb,
    COUNT,
};

