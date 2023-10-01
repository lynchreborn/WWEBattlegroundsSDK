#pragma once
#include "CoreMinimal.h"
#include "WWEMinigameAdvantage.generated.h"

USTRUCT(BlueprintType)
struct FWWEMinigameAdvantage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HealthRatioForLowestAdvantage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LowestAdvantage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HealthRatioForHighestAdvantage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HighestAdvantage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HealthRatioForNoAdvantage;
    
    WWEPLAYGROUNDS_API FWWEMinigameAdvantage();
};

