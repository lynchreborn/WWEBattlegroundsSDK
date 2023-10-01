#pragma once
#include "CoreMinimal.h"
#include "PGDailyQuestBarReward.h"
#include "PGDailyQuestBarData.generated.h"

USTRUCT(BlueprintType)
struct FPGDailyQuestBarData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DailyQuestCompleted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxDailyQuestCompleted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPGDailyQuestBarReward> BarRewards;
    
    PLAYGROUNDSGAME_API FPGDailyQuestBarData();
};

