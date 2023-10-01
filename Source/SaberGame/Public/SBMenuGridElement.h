#pragma once
#include "CoreMinimal.h"
#include "Types/SlateEnums.h"
#include "ESBGridNavigationStyle.h"
#include "SBButton.h"
#include "SBMenuGridElement.generated.h"

class USBMenuGrid;
class USBMenuGridElement;
class USoundCue;

UCLASS(Blueprintable, EditInlineNew)
class SABERGAME_API USBMenuGridElement : public USBButton {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ElementColSpan;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ElementRowSpan;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ZOrder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    USBMenuGrid* MyGrid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    int32 column;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    int32 row;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBGridNavigationStyle NavigationStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    TMap<EUINavigation, USBMenuGridElement*> CustomNavigation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    TMap<EUINavigation, USBMenuGridElement*> StoredNavigation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    USoundCue* OnNavigatedSoundCue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    FName PressActionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    int32 DefaultZOrder;
    
public:
    USBMenuGridElement();
    UFUNCTION(BlueprintCallable)
    void SetZOrder(int32 _ZOrder);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SendToFrontZOrder();
    
    UFUNCTION(BlueprintCallable)
    void RestoreDefaultZOrder();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnGridFocusLost();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnGridFocus();
    
};

