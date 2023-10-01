#pragma once
#include "CoreMinimal.h"
#include "ESBNotificationState.generated.h"

UENUM(BlueprintType)
enum class ESBNotificationState : uint8 {
    NONE,
    AnimIn,
    AnimOut,
    COUNT,
};

