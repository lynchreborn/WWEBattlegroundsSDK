#pragma once
#include "CoreMinimal.h"
#include "EWWESkillLevelState.generated.h"

UENUM(BlueprintType)
enum class EWWESkillLevelState : uint8 {
    Locked,
    Unlocked,
    Inaccessible,
    COUNT,
};

