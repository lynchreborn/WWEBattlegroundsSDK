#pragma once
#include "CoreMinimal.h"
#include "EWWESkillLineState.generated.h"

UENUM(BlueprintType)
enum class EWWESkillLineState : uint8 {
    Inaccessible,
    LineOff,
    LineOn,
    COUNT,
};

