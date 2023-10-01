#pragma once
#include "CoreMinimal.h"
#include "EWWEIncapacitateEffectType.h"
#include "WWEPowerUpPerTime.h"
#include "WWEIncapacitatePowerUp.generated.h"

UCLASS(Blueprintable)
class WWEPLAYGROUNDS_API UWWEIncapacitatePowerUp : public UWWEPowerUpPerTime {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EWWEIncapacitateEffectType IncapacitateEffectType;
    
public:
    UWWEIncapacitatePowerUp();
};

