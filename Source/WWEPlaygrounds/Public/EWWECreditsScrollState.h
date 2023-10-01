#pragma once
#include "CoreMinimal.h"
#include "EWWECreditsScrollState.generated.h"

UENUM(BlueprintType)
enum class EWWECreditsScrollState : uint8 {
    None,
    Idle,
    Lerping,
    Count,
};

