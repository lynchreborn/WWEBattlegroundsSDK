#pragma once
#include "CoreMinimal.h"
#include "WWEPowerUpBase.h"
#include "WWEHealthPotionPowerUp.generated.h"

UCLASS(Blueprintable)
class WWEPLAYGROUNDS_API UWWEHealthPotionPowerUp : public UWWEPowerUpBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HealthFactor;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PercentageToApply;
    
public:
    UWWEHealthPotionPowerUp();
};

