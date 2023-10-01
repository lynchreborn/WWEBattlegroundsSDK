#pragma once
#include "CoreMinimal.h"
#include "EWWEPlayerRewardsRowType.generated.h"

UENUM(BlueprintType)
enum class EWWEPlayerRewardsRowType : uint8 {
    None,
    FinalResults,
    AttackCombat,
    DefenseCombat,
    DifficultLevel,
    ResistedTime,
    OpponentsKickedOut,
    FameObjectives,
    OnlineMatch,
    Total,
    COUNT,
};

