#pragma once
#include "CoreMinimal.h"
#include "WWEAction_ActivePowerUp.h"
#include "WWEAction_PowerUpIceBreath.generated.h"

UCLASS(Blueprintable)
class WWEPLAYGROUNDS_API UWWEAction_PowerUpIceBreath : public UWWEAction_ActivePowerUp {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RadiusIceBreath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AngleIceBreath;
    
public:
    UWWEAction_PowerUpIceBreath();
protected:
    UFUNCTION(BlueprintCallable)
    void UpdateIceBreath();
    
};

