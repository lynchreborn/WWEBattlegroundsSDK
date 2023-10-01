#pragma once
#include "CoreMinimal.h"
#include "WWEGoldFactorTimeLevelStats.h"
#include "WWEPowerUpPerTimeParameters.h"
#include "WWESilverFactorTimeLevelStats.h"
#include "WWEFactorPowerUpParameters.generated.h"

UCLASS(Blueprintable)
class WWEPLAYGROUNDS_API UWWEFactorPowerUpParameters : public UWWEPowerUpPerTimeParameters {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PowerUpFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWWESilverFactorTimeLevelStats SilverParameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWWEGoldFactorTimeLevelStats GoldParameters;
    
public:
    UWWEFactorPowerUpParameters();
};

