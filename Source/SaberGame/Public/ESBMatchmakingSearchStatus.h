#pragma once
#include "CoreMinimal.h"
#include "ESBMatchmakingSearchStatus.generated.h"

UENUM(BlueprintType)
enum class ESBMatchmakingSearchStatus : uint8 {
    NONE,
    StillInMatchmaking,
    OutOfMatchmaking,
    NotEnoughServers,
    UnexpectedError,
    COUNT,
};

