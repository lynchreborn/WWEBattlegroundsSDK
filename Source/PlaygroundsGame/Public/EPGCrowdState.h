#pragma once
#include "CoreMinimal.h"
#include "EPGCrowdState.generated.h"

UENUM(BlueprintType)
enum class EPGCrowdState : uint8 {
    CS_Idle_Loop,
    CS_Happy,
    CS_Happy_Loop,
    CS_VeryHappy,
    CS_VeryHappy_Loop,
    CS_Unhappy,
    CS_Unhappy_Loop,
    CS_Angry,
    CS_Angry_Loop,
    CS_Taunt,
    CS_Support,
    CS_CustomState1,
    COUNT,
};

