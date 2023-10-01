#pragma once
#include "CoreMinimal.h"
#include "WWERewardBase.h"
#include "WWEItemReward.generated.h"

USTRUCT(BlueprintType)
struct FWWEItemReward : public FWWERewardBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString OptionalDisplayName;
    
    WWEPLAYGROUNDS_API FWWEItemReward();
};

