#pragma once
#include "CoreMinimal.h"
#include "WWEAction_AnimBase.h"
#include "WWEAction_ReceiveGrabExitFromCage.generated.h"

class UWWEHUDMinigameButtonPress;

UCLASS(Blueprintable)
class WWEPLAYGROUNDS_API UWWEAction_ReceiveGrabExitFromCage : public UWWEAction_AnimBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bSuccess;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UWWEHUDMinigameButtonPress* MinigameButtonPressWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TotalCountMinigameNeeded;
    
public:
    UWWEAction_ReceiveGrabExitFromCage();
protected:
    UFUNCTION(BlueprintCallable)
    void OnTimeEnd();
    
    UFUNCTION(BlueprintCallable)
    void OnReceiveGrabExitFromCageEndAborted();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastSetCanPause(const bool bCanPause);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastEndMinigame(const bool bDefenderWon);
    
};

