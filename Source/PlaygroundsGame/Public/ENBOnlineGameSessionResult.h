#pragma once
#include "CoreMinimal.h"
#include "ENBOnlineGameSessionResult.generated.h"

UENUM(BlueprintType)
enum class ENBOnlineGameSessionResult : uint8 {
    Success,
    Aborted,
    Failed,
    UnknownError,
};

