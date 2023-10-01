#pragma once
#include "CoreMinimal.h"
#include "WWEAction_ComplexBase.h"
#include "WWEAction_SuccessionWeaponHit.generated.h"

UCLASS(Blueprintable)
class WWEPLAYGROUNDS_API UWWEAction_SuccessionWeaponHit : public UWWEAction_ComplexBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    bool bWasHitLastSection;
    
public:
    UWWEAction_SuccessionWeaponHit();
protected:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastNotifyHitEvent();
    
};

