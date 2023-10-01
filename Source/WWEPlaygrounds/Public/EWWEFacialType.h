#pragma once
#include "CoreMinimal.h"
#include "EWWEFacialType.generated.h"

UENUM(BlueprintType)
enum class EWWEFacialType : uint8 {
    None,
    Pain,
    Grin,
    Angry,
    Tired,
    Happy,
    Idle,
    Effort,
    HitCharacterBox,
    COUNT,
};

