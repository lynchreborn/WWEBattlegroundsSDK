#pragma once
#include "CoreMinimal.h"
#include "EWWETournamentPopUpType.generated.h"

UENUM(BlueprintType)
enum class EWWETournamentPopUpType : uint8 {
    Won,
    Checkpoint,
    Lose,
    COUNT,
};

