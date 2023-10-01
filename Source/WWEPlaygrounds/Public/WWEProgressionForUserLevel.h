#pragma once
#include "CoreMinimal.h"
#include "WWEProgressionReward.h"
#include "WWEProgressionForUserLevel.generated.h"

USTRUCT(BlueprintType)
struct FWWEProgressionForUserLevel {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ExperienceToLevelUp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWWEProgressionReward LevelReward;
    
    WWEPLAYGROUNDS_API FWWEProgressionForUserLevel();
};

