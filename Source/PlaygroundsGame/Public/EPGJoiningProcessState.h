#pragma once
#include "CoreMinimal.h"
#include "EPGJoiningProcessState.generated.h"

UENUM(BlueprintType)
enum class EPGJoiningProcessState : uint8 {
    NONE,
    JoiningSuccessful,
    JoiningFailed,
    COUNT,
};

