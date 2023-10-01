#pragma once
#include "CoreMinimal.h"
#include "WWELevelStats.h"
#include "WWESilverFactorTimeLevelStats.generated.h"

USTRUCT(BlueprintType)
struct FWWESilverFactorTimeLevelStats : public FWWELevelStats {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PowerUpFactor;
    
    WWEPLAYGROUNDS_API FWWESilverFactorTimeLevelStats();
};

