#pragma once
#include "CoreMinimal.h"
#include "EWWERopeInteractionType.generated.h"

UENUM(BlueprintType)
enum class EWWERopeInteractionType : uint8 {
    None,
    SetRope,
    UnsetRope,
    Grab,
    Release,
    Glue,
    Unglue,
    EnableColliders,
    DisableColliders,
    EnablePhysicsDrivenAnimation,
    DisablePhysicsDrivenAnimation,
    ResetRope,
    EnableUpdateRope,
    DisableUpdateRope,
};

