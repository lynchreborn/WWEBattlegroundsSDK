#pragma once
#include "CoreMinimal.h"
#include "EWWECombatResultsState.generated.h"

UENUM(BlueprintType)
enum class EWWECombatResultsState : uint8 {
    InitialState,
    GoToUserRewards,
    UserRewards,
    COUNT,
};

