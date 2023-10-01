#pragma once
#include "CoreMinimal.h"
#include "EWWEAttachedActorWithTranslationBone.generated.h"

UENUM(BlueprintType)
enum class EWWEAttachedActorWithTranslationBone : uint8 {
    TargetRival,
    Teammate,
    CurrentTurnbuckle,
    ForwardRope,
    TargetRivalMidSocket,
    SteelCage,
    CrocodileJaw,
    Coffin,
    COUNT,
};

