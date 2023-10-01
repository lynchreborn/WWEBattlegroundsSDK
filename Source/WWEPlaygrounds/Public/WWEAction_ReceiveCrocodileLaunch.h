#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "WWEAction_AnimBase.h"
#include "WWEAction_ReceiveCrocodileLaunch.generated.h"

class AWWECrocodilesEvent;

UCLASS(Blueprintable)
class WWEPLAYGROUNDS_API UWWEAction_ReceiveCrocodileLaunch : public UWWEAction_AnimBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    AWWECrocodilesEvent* CrocodileEventTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    bool bLaunched;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    bool bIsControlledFlight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    bool bWasInsideRing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    bool bNeedUpdateRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    FVector CharacterOldPos;
    
public:
    UWWEAction_ReceiveCrocodileLaunch();
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastSetCrocodileEventTarget(AWWECrocodilesEvent* _CrocodileEventTarget);
    
};

