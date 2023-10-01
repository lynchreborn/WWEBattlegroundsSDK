#pragma once
#include "CoreMinimal.h"
#include "WWELevelStats.h"
#include "WWEGoldSpeedTimeLevelStats.generated.h"

USTRUCT(BlueprintType)
struct FWWEGoldSpeedTimeLevelStats : public FWWELevelStats {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpeedFactor;
    
    WWEPLAYGROUNDS_API FWWEGoldSpeedTimeLevelStats();
};

