#pragma once
#include "CoreMinimal.h"
#include "SBUserWidget.h"
#include "WWEHUDMoneyWidget.generated.h"

class UWWEHUDMoneyBarWidget;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class WWEPLAYGROUNDS_API UWWEHUDMoneyWidget : public USBUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWWEHUDMoneyBarWidget* HomeMoneyBar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWWEHUDMoneyBarWidget* AwayMoneyBar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* HideHUDAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* ShowHUDAnimation;
    
public:
    UWWEHUDMoneyWidget();
};

