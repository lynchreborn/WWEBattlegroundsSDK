#pragma once
#include "CoreMinimal.h"
#include "EPGDailyQuestRewardType.h"
#include "PGDailyQuestReward.generated.h"

USTRUCT(BlueprintType)
struct FPGDailyQuestReward {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPGDailyQuestRewardType RewardType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RewardQuantity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> ItemsUID;
    
    PLAYGROUNDSGAME_API FPGDailyQuestReward();
};

