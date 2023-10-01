#pragma once
#include "CoreMinimal.h"
#include "EWWESkillType.generated.h"

UENUM(BlueprintType)
enum class EWWESkillType : uint8 {
    Attack,
    Defense,
    Charisma,
    COUNT,
};

