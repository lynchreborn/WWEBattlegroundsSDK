#pragma once
#include "CoreMinimal.h"
#include "SBQuestRewardBar.h"
#include "SBQuestBarData.generated.h"

USTRUCT(BlueprintType)
struct SABERGAME_API FSBQuestBarData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 QuestCompleted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxQuestCompleted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBQuestRewardBar> BarRewards;
    
    FSBQuestBarData();
};

