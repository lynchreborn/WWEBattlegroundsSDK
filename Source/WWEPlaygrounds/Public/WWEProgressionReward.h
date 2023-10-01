#pragma once
#include "CoreMinimal.h"
#include "WWEArenaReward.h"
#include "WWEObjectReward.h"
#include "WWEPointsReward.h"
#include "WWEPrestigeReward.h"
#include "WWESkillReward.h"
#include "WWEProgressionReward.generated.h"

USTRUCT(BlueprintType)
struct FWWEProgressionReward {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FWWEObjectReward> ObjectRewards;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FWWEArenaReward> ArenaRewards;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FWWEPointsReward> PointsRewards;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FWWESkillReward> SkillRewards;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FWWEPrestigeReward> PrestigeRewards;
    
    WWEPLAYGROUNDS_API FWWEProgressionReward();
};

