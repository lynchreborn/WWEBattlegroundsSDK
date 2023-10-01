#pragma once
#include "CoreMinimal.h"
#include "PGDailyQuestReward.h"
#include "PGDailyQuestBarReward.generated.h"

USTRUCT(BlueprintType)
struct FPGDailyQuestBarReward : public FPGDailyQuestReward {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DailyQuestNeeded;
    
    PLAYGROUNDSGAME_API FPGDailyQuestBarReward();
};

