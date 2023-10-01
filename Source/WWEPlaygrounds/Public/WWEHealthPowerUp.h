#pragma once
#include "CoreMinimal.h"
#include "EWWEHealthEffectType.h"
#include "WWEPowerUpPerTime.h"
#include "WWEHealthPowerUp.generated.h"

UCLASS(Blueprintable)
class WWEPLAYGROUNDS_API UWWEHealthPowerUp : public UWWEPowerUpPerTime {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EWWEHealthEffectType HealthEffectType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HealthFactor;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PercentageToApply;
    
public:
    UWWEHealthPowerUp();
};

