#pragma once
#include "CoreMinimal.h"
#include "WWEStatsData.generated.h"

USTRUCT(BlueprintType)
struct FWWEStatsData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinStatValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxStatValue;
    
    WWEPLAYGROUNDS_API FWWEStatsData();
};

