#pragma once
#include "CoreMinimal.h"
#include "EWWEFactorEffectType.h"
#include "WWEPowerUpPerTime.h"
#include "WWEFactorPowerUp.generated.h"

UCLASS(Blueprintable)
class WWEPLAYGROUNDS_API UWWEFactorPowerUp : public UWWEPowerUpPerTime {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EWWEFactorEffectType FactorEffectType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float PowerUpFactor;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float PercentageToApply;
    
public:
    UWWEFactorPowerUp();
};

