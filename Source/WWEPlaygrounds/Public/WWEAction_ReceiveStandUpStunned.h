#pragma once
#include "CoreMinimal.h"
#include "WWEAction_AnimBase.h"
#include "WWEAction_ReceiveStandUpStunned.generated.h"

UCLASS(Blueprintable)
class WWEPLAYGROUNDS_API UWWEAction_ReceiveStandUpStunned : public UWWEAction_AnimBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DefaultSpecialStunTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    float ForcedSpecialStunTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HPPercentageToApplyStun;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StunTimeWithHigherHP;
    
public:
    UWWEAction_ReceiveStandUpStunned();
protected:
    UFUNCTION(BlueprintCallable)
    void PrepareCounter();
    
    UFUNCTION(BlueprintCallable)
    void EndReceiveStandUpStunnedByTime();
    
};

