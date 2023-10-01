#pragma once
#include "CoreMinimal.h"
#include "EWWEGrabBodyPart.generated.h"

UENUM(BlueprintType)
enum class EWWEGrabBodyPart : uint8 {
    None,
    FrontShoulder,
    BackWaist,
    FrontHead,
    BackHead,
    UpperBack,
    HandToHead,
    FrontWaist,
    Combo_BackBreaker,
    FeetShoulder,
    COUNT,
};

