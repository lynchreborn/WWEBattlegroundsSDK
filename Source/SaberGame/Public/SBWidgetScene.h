#pragma once
#include "CoreMinimal.h"
#include "SBBaseScene.h"
#include "Templates/SubclassOf.h"
#include "SBWidgetScene.generated.h"

class UUserWidget;
class UWidget;

UCLASS(Blueprintable)
class SABERGAME_API USBWidgetScene : public USBBaseScene {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UUserWidget> WidgetAP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUserWidget> WidgetBP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    UUserWidget* Widget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowMultipleFocus;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ZOrder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsResettingFocus;
    
public:
    USBWidgetScene();
    UFUNCTION(BlueprintCallable)
    void SetUserFocusWithCache();
    
    UFUNCTION(BlueprintCallable)
    void ClearUserFocus();
    
    UFUNCTION(BlueprintCallable)
    void ClearFocusCache();
    
protected:
    UFUNCTION(BlueprintCallable)
    void CheckAddToTransitionableElements(UWidget* ChildWidget);
    
public:
    UFUNCTION(BlueprintCallable)
    void CacheCurrentUserFocus();
    
};

