#pragma once
#include "CoreMinimal.h"
#include "EWWEPointsRewardType.h"
#include "WWERewardBase.h"
#include "WWEPointsReward.generated.h"

USTRUCT(BlueprintType)
struct FWWEPointsReward : public FWWERewardBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EWWEPointsRewardType PointsType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Points;
    
    WWEPLAYGROUNDS_API FWWEPointsReward();
};

