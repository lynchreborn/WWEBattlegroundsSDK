#pragma once
#include "CoreMinimal.h"
#include "EWWEHardCurrencyProgressionCondition.generated.h"

UENUM(BlueprintType)
enum class EWWEHardCurrencyProgressionCondition : uint8 {
    Victory,
    Defeat,
    KOTRResistedTime_PerSecond,
    KOTROpponentKickedOut_PerOpponent,
    COUNT,
};

