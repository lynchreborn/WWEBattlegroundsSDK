#pragma once
#include "CoreMinimal.h"
#include "EWWEEmpoweredEffectType.h"
#include "WWEPowerUpPerTime.h"
#include "WWEEmpoweredPowerUp.generated.h"

UCLASS(Blueprintable)
class WWEPLAYGROUNDS_API UWWEEmpoweredPowerUp : public UWWEPowerUpPerTime {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EWWEEmpoweredEffectType EmpoweredEffectType;
    
public:
    UWWEEmpoweredPowerUp();
};

