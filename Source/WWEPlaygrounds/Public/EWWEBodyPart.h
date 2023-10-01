#pragma once
#include "CoreMinimal.h"
#include "EWWEBodyPart.generated.h"

UENUM(BlueprintType)
enum class EWWEBodyPart : uint8 {
    None,
    Legs,
    Chest,
    Head,
    RightLeg,
    LeftLeg,
    Arms,
    RightArm,
    LeftArm,
    RightKnee,
    LeftKnee,
    COUNT,
};

