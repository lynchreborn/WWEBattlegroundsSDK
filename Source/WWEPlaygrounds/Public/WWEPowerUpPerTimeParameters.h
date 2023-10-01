#pragma once
#include "CoreMinimal.h"
#include "WWEGoldPerTimeLevelStats.h"
#include "WWEPowerUpBaseParameters.h"
#include "WWESilverPerTimeLevelStats.h"
#include "WWEPowerUpPerTimeParameters.generated.h"

UCLASS(Blueprintable)
class WWEPLAYGROUNDS_API UWWEPowerUpPerTimeParameters : public UWWEPowerUpBaseParameters {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DurationTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWWESilverPerTimeLevelStats PerTimeSilverLevelStats;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWWEGoldPerTimeLevelStats PerTimeGoldLevelStats;
    
public:
    UWWEPowerUpPerTimeParameters();
};

