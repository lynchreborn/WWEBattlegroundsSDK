#pragma once
#include "CoreMinimal.h"
#include "EWWEMinigame.generated.h"

UENUM(BlueprintType)
enum class EWWEMinigame : uint8 {
    PushOutOfRing,
    PullFromCage,
    EscapeFromCage,
    Submission,
    Pin,
    None,
};

