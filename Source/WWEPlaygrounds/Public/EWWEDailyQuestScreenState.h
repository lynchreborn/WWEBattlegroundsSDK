#pragma once
#include "CoreMinimal.h"
#include "EWWEDailyQuestScreenState.generated.h"

UENUM(BlueprintType)
enum class EWWEDailyQuestScreenState : uint8 {
    Online,
    Offline,
    COUNT,
};

