#pragma once
#include "CoreMinimal.h"
#include "WWEPowerUpBase.h"
#include "WWEEnhancerPowerUp.generated.h"

UCLASS(Blueprintable)
class WWEPLAYGROUNDS_API UWWEEnhancerPowerUp : public UWWEPowerUpBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EnhanceFactor;
    
    UWWEEnhancerPowerUp();
};

