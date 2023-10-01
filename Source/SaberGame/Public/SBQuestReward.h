#pragma once
#include "CoreMinimal.h"
#include "ESBQuestRewardType.h"
#include "SBQuestReward.generated.h"

USTRUCT(BlueprintType)
struct SABERGAME_API FSBQuestReward {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBQuestRewardType RewardType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RewardQuantity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> ItemsUID;
    
    FSBQuestReward();
};

