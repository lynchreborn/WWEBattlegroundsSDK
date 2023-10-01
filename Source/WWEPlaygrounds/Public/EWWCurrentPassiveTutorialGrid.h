#pragma once
#include "CoreMinimal.h"
#include "EWWCurrentPassiveTutorialGrid.generated.h"

UENUM(BlueprintType)
enum class EWWCurrentPassiveTutorialGrid : uint8 {
    Combat,
    Progression,
    GameRules,
    COUNT,
};

