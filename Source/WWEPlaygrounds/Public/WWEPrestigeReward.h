#pragma once
#include "CoreMinimal.h"
#include "WWERewardBase.h"
#include "WWEPrestigeReward.generated.h"

USTRUCT(BlueprintType)
struct FWWEPrestigeReward : public FWWERewardBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CustomCharacterId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PrestigePoints;
    
    WWEPLAYGROUNDS_API FWWEPrestigeReward();
};

