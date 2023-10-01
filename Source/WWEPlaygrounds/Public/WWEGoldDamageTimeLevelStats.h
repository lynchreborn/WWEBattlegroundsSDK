#pragma once
#include "CoreMinimal.h"
#include "WWELevelStats.h"
#include "WWEGoldDamageTimeLevelStats.generated.h"

USTRUCT(BlueprintType)
struct FWWEGoldDamageTimeLevelStats : public FWWELevelStats {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DamageFactor;
    
    WWEPLAYGROUNDS_API FWWEGoldDamageTimeLevelStats();
};

