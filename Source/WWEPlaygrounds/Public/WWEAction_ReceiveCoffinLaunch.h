#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "WWEAction_AnimBase.h"
#include "WWEAction_ReceiveCoffinLaunch.generated.h"

class AWWECoffinEvent;

UCLASS(Blueprintable)
class WWEPLAYGROUNDS_API UWWEAction_ReceiveCoffinLaunch : public UWWEAction_AnimBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    AWWECoffinEvent* CoffinEventTarget;
    
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
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    FVector CachedTranslationBoneLocation;
    
public:
    UWWEAction_ReceiveCoffinLaunch();
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastSetCoffinEventTarget(AWWECoffinEvent* _CoffinEventTarget);
    
};

