#pragma once
#include "CoreMinimal.h"
#include "EWWEHealthEffectType.generated.h"

UENUM()
enum class EWWEHealthEffectType : int32 {
    None,
    SelfRecoveryTimeDivided,
    SelfRecoveryInstant,
    Count,
};

