#pragma once
#include "CoreMinimal.h"
#include "EWWEOtherCollider.generated.h"

UENUM(BlueprintType)
enum class EWWEOtherCollider : uint8 {
    None,
    Character_DEPRECATED_USE_THIS_FOR_ANY_NEW_OTHER_COLLIDER,
    HarshlyRope,
    Rope,
    RingWall,
};

