#pragma once
#include "CoreMinimal.h"
#include "EWWESpeedEffectType.h"
#include "WWEPowerUpPerTime.h"
#include "WWESpeedPowerUp.generated.h"

UCLASS(Blueprintable)
class WWEPLAYGROUNDS_API UWWESpeedPowerUp : public UWWEPowerUpPerTime {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EWWESpeedEffectType SpeedEffectType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpeedFactor;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PercentageToApply;
    
public:
    UWWESpeedPowerUp();
};

