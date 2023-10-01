#pragma once
#include "CoreMinimal.h"
#include "ESBQuestState.generated.h"

UENUM(BlueprintType)
enum class ESBQuestState : uint8 {
    None,
    InProgress,
    Completed,
    Claimed,
};

