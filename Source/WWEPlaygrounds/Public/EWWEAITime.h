#pragma once
#include "CoreMinimal.h"
#include "EWWEAITime.generated.h"

UENUM(BlueprintType)
enum class EWWEAITime : uint8 {
    NONE,
    BaseMinigame,
    PinMinigame,
    SubmissionMinigame,
    SteelCageMinigame,
    ReactionTime,
    WanderWait,
    SubmissionMinigameOnDefense,
};

