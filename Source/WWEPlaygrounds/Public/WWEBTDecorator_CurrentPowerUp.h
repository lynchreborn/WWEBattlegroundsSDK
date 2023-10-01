#pragma once
#include "CoreMinimal.h"
#include "EWWEPowerUpType.h"
#include "WWEBTDecorator.h"
#include "WWEBTDecorator_CurrentPowerUp.generated.h"

UCLASS(Blueprintable)
class WWEPLAYGROUNDS_API UWWEBTDecorator_CurrentPowerUp : public UWWEBTDecorator {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EWWEPowerUpType> PowerUpTypes;
    
public:
    UWWEBTDecorator_CurrentPowerUp();
};

