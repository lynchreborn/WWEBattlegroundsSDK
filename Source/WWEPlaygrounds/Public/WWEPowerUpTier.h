#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EWWETierSlotType.h"
#include "WWEPowerUpTier.generated.h"

UCLASS(Blueprintable)
class WWEPLAYGROUNDS_API UWWEPowerUpTier : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWWETierSlotType TierType;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 PowerUpAmountPoints;
    
    UWWEPowerUpTier();
};

