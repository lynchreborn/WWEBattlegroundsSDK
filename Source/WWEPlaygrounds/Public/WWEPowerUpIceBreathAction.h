#pragma once
#include "CoreMinimal.h"
#include "WWEActivePowerUpAction.h"
#include "WWEPowerUpIceBreathAction.generated.h"

UCLASS(Blueprintable)
class UWWEPowerUpIceBreathAction : public UWWEActivePowerUpAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOnTurnbuckle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFacingToRing;
    
    UWWEPowerUpIceBreathAction();
};

