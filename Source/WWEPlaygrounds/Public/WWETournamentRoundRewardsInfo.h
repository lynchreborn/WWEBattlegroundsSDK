#pragma once
#include "CoreMinimal.h"
#include "WWEProgressionReward.h"
#include "WWETournamentRoundRewardsInfo.generated.h"

USTRUCT(BlueprintType)
struct FWWETournamentRoundRewardsInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    int32 RoundNumber;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    bool bIsCheckpoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    FWWEProgressionReward Rewards;
    
    WWEPLAYGROUNDS_API FWWETournamentRoundRewardsInfo();
};

