#pragma once
#include "CoreMinimal.h"
#include "ESBMessageBoxClosingReason.h"
#include "SBStandaloneButton.h"
#include "EWWEIngameMenuAction.h"
#include "WWEIngameMenuButton.generated.h"

class USoundCue;

UCLASS(Blueprintable, EditInlineNew)
class WWEPLAYGROUNDS_API UWWEIngameMenuButton : public USBStandaloneButton {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWWEIngameMenuAction ButtonAction;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USoundCue* OnNavigatedSoundCue;
    
public:
    UWWEIngameMenuButton();
protected:
    UFUNCTION(BlueprintCallable)
    void OnConfirmationWantToExitMsgClosed(ESBMessageBoxClosingReason Reason);
    
};

