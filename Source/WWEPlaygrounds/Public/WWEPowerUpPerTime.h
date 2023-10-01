#pragma once
#include "CoreMinimal.h"
#include "WWEPowerUpBase.h"
#include "WWEPowerUpPerTime.generated.h"

UCLASS(Abstract, Blueprintable)
class WWEPLAYGROUNDS_API UWWEPowerUpPerTime : public UWWEPowerUpBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DurationTime;
    
public:
    UWWEPowerUpPerTime();
};

