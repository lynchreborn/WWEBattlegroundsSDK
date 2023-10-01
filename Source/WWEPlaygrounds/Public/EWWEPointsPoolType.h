#pragma once
#include "CoreMinimal.h"
#include "EWWEPointsPoolType.generated.h"

UENUM()
enum class EWWEPointsPoolType : uint32 {
    TotalPool,
    AttackPool,
    DefensePool,
    ResultPool,
    KOTRResistedTime,
    KOTRKickOut,
    KOTRResult,
    KOTRAttack,
    OtherPool,
    KOTRFameObjectives,
    COUNT,
};

