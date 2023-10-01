#pragma once
#include "CoreMinimal.h"
#include "WWELevelStats.h"
#include "WWEGoldHealthTimeLevelStats.generated.h"

USTRUCT(BlueprintType)
struct FWWEGoldHealthTimeLevelStats : public FWWELevelStats {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HealthFactor;
    
    WWEPLAYGROUNDS_API FWWEGoldHealthTimeLevelStats();
};

