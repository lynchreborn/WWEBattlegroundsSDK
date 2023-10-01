#pragma once
#include "CoreMinimal.h"
#include "EWWEPhysicalAnimationLimb.generated.h"

UENUM(BlueprintType)
enum class EWWEPhysicalAnimationLimb : uint8 {
    None,
    Head,
    LeftArm,
    RightArm,
    LeftLeg,
    RightLeg,
    AllBody,
};

