#pragma once
#include "CoreMinimal.h"
#include "EWWETournamentPlayerState.generated.h"

UENUM(BlueprintType)
enum class EWWETournamentPlayerState : uint8 {
    Pending,
    Playing,
    Defeated,
    Completed,
    COUNT,
};

