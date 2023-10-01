#pragma once
#include "CoreMinimal.h"
#include "EWWEDamageEffectType.generated.h"

UENUM()
enum class EWWEDamageEffectType : int32 {
    None,
    ToInflect,
    ToReceive,
    ToReflect,
    ToIncreaseDamageComboHit,
    ToIncreaseDamageWeapons,
    Count,
};

