#pragma once
#include "CoreMinimal.h"
#include "WWELevelStats.h"
#include "WWEGoldInputSabotageTimeLevelStats.generated.h"

USTRUCT(BlueprintType)
struct FWWEGoldInputSabotageTimeLevelStats : public FWWELevelStats {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SabotageFactor;
    
    WWEPLAYGROUNDS_API FWWEGoldInputSabotageTimeLevelStats();
};

