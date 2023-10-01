#pragma once
#include "CoreMinimal.h"
#include "Input/Events.h"
#include "SBUserWidget.h"
#include "SBRootUserWidget.generated.h"

class USBWidgetScene;
class USoundCue;
class UWidget;

UCLASS(Blueprintable, EditInlineNew)
class SABERGAME_API USBRootUserWidget : public USBUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBWidgetScene* Scene;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UWidget*> DefaultFocusWidgets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* WidgetToFocus;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USoundCue* OnAcceptSoundCue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USoundCue* OnCancelSoundCue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanCache;
    
public:
    USBRootUserWidget();
protected:
    UFUNCTION(BlueprintCallable)
    void SetAllFocusTo(UWidget* Target);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCancelBlueprintEvent();
    
    UFUNCTION(BlueprintCallable)
    void OnCancel(int32 UserIdx);
    
    UFUNCTION(BlueprintCallable)
    void OnAccept(int32 UserIdx);
    
public:
    UFUNCTION(BlueprintCallable)
    void InitFocus(bool bAllowMultipleFocus, EFocusCause Cause);
    
    UFUNCTION(BlueprintCallable)
    void ClearInnerFocusCache();
    
};

