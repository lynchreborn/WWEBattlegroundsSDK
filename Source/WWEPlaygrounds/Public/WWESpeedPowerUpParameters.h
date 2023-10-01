#pragma once
#include "CoreMinimal.h"
#include "WWEGoldSpeedTimeLevelStats.h"
#include "WWEPowerUpPerTimeParameters.h"
#include "WWESilverSpeedTimeLevelStats.h"
#include "WWESpeedPowerUpParameters.generated.h"

UCLASS(Blueprintable)
class WWEPLAYGROUNDS_API UWWESpeedPowerUpParameters : public UWWEPowerUpPerTimeParameters {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpeedFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWWESilverSpeedTimeLevelStats SilverParameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWWEGoldSpeedTimeLevelStats GoldParameters;
    
public:
    UWWESpeedPowerUpParameters();
};

