#pragma once
#include "CoreMinimal.h"
#include "ESBSessionResult.generated.h"

UENUM(BlueprintType)
enum class ESBSessionResult : uint8 {
    Success,
    Busy,
    Duplicated,
    Unneeded,
    NotFound,
    Denied,
    Unsupported,
    UnknownError,
};

