#pragma once
#include "CoreMinimal.h"
#include "WWELevelStats.h"
#include "WWESilverPerTimeLevelStats.generated.h"

USTRUCT(BlueprintType)
struct FWWESilverPerTimeLevelStats : public FWWELevelStats {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DurationTime;
    
    WWEPLAYGROUNDS_API FWWESilverPerTimeLevelStats();
};

