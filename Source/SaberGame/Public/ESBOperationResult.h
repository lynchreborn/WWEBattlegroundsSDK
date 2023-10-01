#pragma once
#include "CoreMinimal.h"
#include "ESBOperationResult.generated.h"

UENUM()
enum class ESBOperationResult : int32 {
    Success,
    Failure = 0xFFFFFFF,
    UnexpectedError = 0x8000001,
    Timeout,
    NotFound,
    ExternalError,
    NotEnoughVirtualCurrency = 0x8000804,
    MaximumReplayabilityValueReached = 0x8000601,
    DungeonIncomplete = 0x802001,
    DungeonCompletionRewardClaimed,
};

