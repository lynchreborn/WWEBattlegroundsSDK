#pragma once
#include "CoreMinimal.h"
#include "WWELevelStats.h"
#include "WWESilverSpeedTimeLevelStats.generated.h"

USTRUCT(BlueprintType)
struct FWWESilverSpeedTimeLevelStats : public FWWELevelStats {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpeedFactor;
    
    WWEPLAYGROUNDS_API FWWESilverSpeedTimeLevelStats();
};

