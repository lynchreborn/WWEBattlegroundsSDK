#pragma once
#include "CoreMinimal.h"
#include "SBQuestReward.h"
#include "SBQuestRewardBar.generated.h"

USTRUCT(BlueprintType)
struct SABERGAME_API FSBQuestRewardBar : public FSBQuestReward {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 QuestNeeded;
    
    FSBQuestRewardBar();
};

