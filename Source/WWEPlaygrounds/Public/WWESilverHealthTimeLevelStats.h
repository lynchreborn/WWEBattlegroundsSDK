#pragma once
#include "CoreMinimal.h"
#include "WWELevelStats.h"
#include "WWESilverHealthTimeLevelStats.generated.h"

USTRUCT(BlueprintType)
struct FWWESilverHealthTimeLevelStats : public FWWELevelStats {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HealthFactor;
    
    WWEPLAYGROUNDS_API FWWESilverHealthTimeLevelStats();
};

