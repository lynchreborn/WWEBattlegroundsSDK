#pragma once
#include "CoreMinimal.h"
#include "WWERewardBase.h"
#include "WWESkillTreeTierReward.generated.h"

USTRUCT(BlueprintType)
struct FWWESkillTreeTierReward : public FWWERewardBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Tier;
    
    WWEPLAYGROUNDS_API FWWESkillTreeTierReward();
};

