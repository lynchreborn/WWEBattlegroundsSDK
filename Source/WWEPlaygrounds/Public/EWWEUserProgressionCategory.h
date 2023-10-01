#pragma once
#include "CoreMinimal.h"
#include "EWWEUserProgressionCategory.generated.h"

UENUM(BlueprintType)
enum class EWWEUserProgressionCategory : uint8 {
    EndMatch,
    Actions,
    Result,
    AttackScore,
    Scenario,
    DefenseScore,
    COUNT,
};

