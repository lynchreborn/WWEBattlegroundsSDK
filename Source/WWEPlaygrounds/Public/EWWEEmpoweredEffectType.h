#pragma once
#include "CoreMinimal.h"
#include "EWWEEmpoweredEffectType.generated.h"

UENUM()
enum class EWWEEmpoweredEffectType : int32 {
    None,
    BreakDefense,
    DamageInmunity,
    Count,
};

