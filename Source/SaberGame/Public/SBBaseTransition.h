#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "OnTransitionInFinishDelegateDelegate.h"
#include "OnTransitionOutFinishDelegateDelegate.h"
#include "SBBaseTransition.generated.h"

class USBBaseScene;
class USBGameInstance;

UCLASS(Blueprintable)
class SABERGAME_API USBBaseTransition : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName UID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBGameInstance* MyGameInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTransitionInFinishDelegate OnTransitionInFinishDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTransitionOutFinishDelegate OnTransitionOutFinishDelegate;
    
    USBBaseTransition();
    UFUNCTION(BlueprintCallable)
    void TransitionOut(USBBaseScene* FromDontUse, USBBaseScene* to);
    
    UFUNCTION(BlueprintCallable)
    void TransitionIn(USBBaseScene* from, USBBaseScene* ToDontUse);
    
    UFUNCTION(BlueprintCallable)
    void StopAndClearReferences();
    
    UFUNCTION(BlueprintCallable)
    void ResetTransition(USBBaseScene* from, USBBaseScene* ToDontUse);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnTransitionOutFinished();
    
    UFUNCTION(BlueprintCallable)
    void OnTransitionInFinished();
    
public:
    UFUNCTION(BlueprintCallable)
    void Init(USBGameInstance* GameInstance);
    
};

