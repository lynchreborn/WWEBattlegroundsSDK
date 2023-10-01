#pragma once
#include "CoreMinimal.h"
#include "EWWETournamentInfoSlotValueType.generated.h"

UENUM(BlueprintType)
enum class EWWETournamentInfoSlotValueType : uint8 {
    SoftCurrency,
    HardCurrency,
    XP,
    Bills,
    Seconds,
    COUNT,
};

