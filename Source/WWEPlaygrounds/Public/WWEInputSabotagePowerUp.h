#pragma once
#include "CoreMinimal.h"
#include "EWWEInputSabotageEffectType.h"
#include "WWEPowerUpPerTime.h"
#include "WWEInputSabotagePowerUp.generated.h"

UCLASS(Blueprintable)
class WWEPLAYGROUNDS_API UWWEInputSabotagePowerUp : public UWWEPowerUpPerTime {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWWEInputSabotageEffectType InputSabotageEffectType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    float SabotageFactor;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PercentageToApply;
    
public:
    UWWEInputSabotagePowerUp();
};

