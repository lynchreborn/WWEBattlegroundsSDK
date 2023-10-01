#pragma once
#include "CoreMinimal.h"
#include "EPGDailyQuestRewardSource.h"
#include "PGDailyQuestReward.h"
#include "PGClaimedDailyQuestReward.generated.h"

USTRUCT(BlueprintType)
struct FPGClaimedDailyQuestReward : public FPGDailyQuestReward {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPGDailyQuestRewardSource Source;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DailyQuestID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DailyQuestsNeeded;
    
    PLAYGROUNDSGAME_API FPGClaimedDailyQuestReward();
};

