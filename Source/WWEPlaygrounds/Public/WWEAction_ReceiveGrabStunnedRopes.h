#pragma once
#include "CoreMinimal.h"
#include "WWEAction_AnimBase.h"
#include "WWEAction_ReceiveGrabStunnedRopes.generated.h"

class UWWEHUDMinigameButtonPress;

UCLASS(Blueprintable)
class WWEPLAYGROUNDS_API UWWEAction_ReceiveGrabStunnedRopes : public UWWEAction_AnimBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bSuccess;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeToEndGrab;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UWWEHUDMinigameButtonPress* MinigameButtonPressWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TotalCountMinigameNeeded;
    
public:
    UWWEAction_ReceiveGrabStunnedRopes();
protected:
    UFUNCTION(BlueprintCallable)
    void OnTimeEnd();
    
};

