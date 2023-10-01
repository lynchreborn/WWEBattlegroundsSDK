#pragma once
#include "CoreMinimal.h"
#include "EWWECameraState.generated.h"

UENUM(BlueprintType)
enum class EWWECameraState : uint8 {
    None,
    Idle,
    Lerping,
    DirectMove,
    Count,
};

