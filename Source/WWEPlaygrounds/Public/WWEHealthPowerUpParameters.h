#pragma once
#include "CoreMinimal.h"
#include "WWEGoldHealthTimeLevelStats.h"
#include "WWEPowerUpPerTimeParameters.h"
#include "WWESilverHealthTimeLevelStats.h"
#include "WWEHealthPowerUpParameters.generated.h"

UCLASS(Blueprintable)
class WWEPLAYGROUNDS_API UWWEHealthPowerUpParameters : public UWWEPowerUpPerTimeParameters {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HealthFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWWESilverHealthTimeLevelStats SilverParameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWWEGoldHealthTimeLevelStats GoldParameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VisualMultiplyFactor;
    
public:
    UWWEHealthPowerUpParameters();
};

