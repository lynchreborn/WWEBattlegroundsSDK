#pragma once
#include "CoreMinimal.h"
#include "WWELevelStats.h"
#include "WWEGoldFactorTimeLevelStats.generated.h"

USTRUCT(BlueprintType)
struct FWWEGoldFactorTimeLevelStats : public FWWELevelStats {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PowerUpFactor;
    
    WWEPLAYGROUNDS_API FWWEGoldFactorTimeLevelStats();
};

