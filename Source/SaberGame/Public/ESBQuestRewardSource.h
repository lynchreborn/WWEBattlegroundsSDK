#pragma once
#include "CoreMinimal.h"
#include "ESBQuestRewardSource.generated.h"

UENUM(BlueprintType)
enum class ESBQuestRewardSource : uint8 {
    None,
    Quest,
    QuestBar,
};

