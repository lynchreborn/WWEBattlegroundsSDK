#pragma once
#include "CoreMinimal.h"
#include "ECombinationType.generated.h"

UENUM(BlueprintType)
enum class ECombinationType : uint8 {
    ComboPunch,
    ComboKick,
    ComboGrab,
    ComboIrishWhip,
    ComboSignature,
    Special,
    ComboGrabSpecial,
    None,
};

