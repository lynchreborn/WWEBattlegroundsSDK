#pragma once
#include "CoreMinimal.h"
#include "SBUserWidget.h"
#include "SBAnimableProgressBar.generated.h"

class UProgressBar;

UCLASS(Blueprintable, EditInlineNew)
class SABERGAME_API USBAnimableProgressBar : public USBUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UProgressBar* ProgressBar;
    
public:
    USBAnimableProgressBar();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnFillStoppedBlueprintEvent();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnFillStartedBlueprintEvent();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnFillFinishedBlueprintEvent();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBarFilledBlueprintEvent();
    
};

