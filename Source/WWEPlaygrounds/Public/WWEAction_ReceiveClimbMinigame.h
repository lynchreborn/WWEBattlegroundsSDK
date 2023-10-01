#pragma once
#include "CoreMinimal.h"
#include "WWEAction_AnimBase.h"
#include "WWEAction_ReceiveClimbMinigame.generated.h"

class UWWEHUDMinigameButtonPress;

UCLASS(Blueprintable)
class WWEPLAYGROUNDS_API UWWEAction_ReceiveClimbMinigame : public UWWEAction_AnimBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bSuccess;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UWWEHUDMinigameButtonPress* MinigameButtonPressWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TotalCountMinigameNeeded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FName LastSection;
    
public:
    UWWEAction_ReceiveClimbMinigame();
protected:
    UFUNCTION(BlueprintCallable)
    void OnTimeEnd();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastEndMinigame(const bool bDefenderWon);
    
};

