#pragma once
#include "CoreMinimal.h"
#include "EWWESkillFrameState.generated.h"

UENUM(BlueprintType)
enum class EWWESkillFrameState : uint8 {
    FrameOff,
    FrameOffSelect,
    FrameOnComplete,
    FrameOnSelect,
    COUNT,
};

