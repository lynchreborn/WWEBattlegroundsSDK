#pragma once
#include "CoreMinimal.h"
#include "EWWETierSlotType.h"
#include "WWEAction_AnimBase.h"
#include "WWEAction_ActivePowerUp.generated.h"

UCLASS(Blueprintable)
class WWEPLAYGROUNDS_API UWWEAction_ActivePowerUp : public UWWEAction_AnimBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EWWETierSlotType CurrentTier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EWWETierSlotType NextTier;
    
public:
    UWWEAction_ActivePowerUp();
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerPerformActivePowerUp(int32 Variation, bool bIsSignature, EWWETierSlotType Tier);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastPerformActivePowerUp(int32 Variation, bool bIsSignature, EWWETierSlotType Tier);
    
};

