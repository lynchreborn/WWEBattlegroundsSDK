#pragma once
#include "CoreMinimal.h"
#include "ESBQuestRewardSource.h"
#include "SBQuestReward.h"
#include "SBQuestRewardClaimed.generated.h"

USTRUCT(BlueprintType)
struct SABERGAME_API FSBQuestRewardClaimed : public FSBQuestReward {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBQuestRewardSource Source;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString QuestID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 QuestsNeeded;
    
    FSBQuestRewardClaimed();
};

