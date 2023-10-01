#pragma once
#include "CoreMinimal.h"
#include "EWWEGrabTypes.generated.h"

UENUM(BlueprintType)
enum class EWWEGrabTypes : uint8 {
    Same,
    Downward,
    Upward,
    DownwardLimit,
    UpwardLimit,
    COUNT,
};

