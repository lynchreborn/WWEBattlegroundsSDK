#pragma once
#include "CoreMinimal.h"
#include "WWELevelStats.h"
#include "WWESilverInputSabotageTimeLevelStats.generated.h"

USTRUCT(BlueprintType)
struct FWWESilverInputSabotageTimeLevelStats : public FWWELevelStats {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SabotageFactor;
    
    WWEPLAYGROUNDS_API FWWESilverInputSabotageTimeLevelStats();
};

