#pragma once
#include "CoreMinimal.h"
#include "WWELevelStats.h"
#include "WWEGoldPerTimeLevelStats.generated.h"

USTRUCT(BlueprintType)
struct FWWEGoldPerTimeLevelStats : public FWWELevelStats {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DurationTime;
    
    WWEPLAYGROUNDS_API FWWEGoldPerTimeLevelStats();
};

