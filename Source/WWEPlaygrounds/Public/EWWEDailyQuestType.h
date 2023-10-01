#pragma once
#include "CoreMinimal.h"
#include "EWWEDailyQuestType.generated.h"

UENUM(BlueprintType)
enum class EWWEDailyQuestType : uint8 {
    NONE,
    PlayCombats,
    WinCombats,
    COUNT,
};

