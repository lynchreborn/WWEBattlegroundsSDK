#pragma once
#include "CoreMinimal.h"
#include "WWEGoldDamageTimeLevelStats.h"
#include "WWEPowerUpPerTimeParameters.h"
#include "WWESilverDamageTimeLevelStats.h"
#include "WWEDamagePowerUpParameters.generated.h"

UCLASS(Blueprintable)
class WWEPLAYGROUNDS_API UWWEDamagePowerUpParameters : public UWWEPowerUpPerTimeParameters {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DamageFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeDilationFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWWESilverDamageTimeLevelStats SilverParameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWWEGoldDamageTimeLevelStats GoldParameters;
    
public:
    UWWEDamagePowerUpParameters();
};

