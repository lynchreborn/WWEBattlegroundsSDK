#pragma once
#include "CoreMinimal.h"
#include "EWWEIncapacitateEffectType.generated.h"

UENUM()
enum class EWWEIncapacitateEffectType : int32 {
    None,
    UsePowerUps,
    ImpossibleToCounter,
    Count,
};

