#pragma once
#include "CoreMinimal.h"
#include "WWELevelStats.h"
#include "WWESilverDamageTimeLevelStats.generated.h"

USTRUCT(BlueprintType)
struct FWWESilverDamageTimeLevelStats : public FWWELevelStats {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DamageFactor;
    
    WWEPLAYGROUNDS_API FWWESilverDamageTimeLevelStats();
};

