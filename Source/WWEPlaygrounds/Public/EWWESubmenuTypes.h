#pragma once
#include "CoreMinimal.h"
#include "EWWESubmenuTypes.generated.h"

UENUM(BlueprintType)
enum class EWWESubmenuTypes : uint8 {
    None,
    MatchRules,
    Interactives,
    Difficulties,
    COUNT,
};

