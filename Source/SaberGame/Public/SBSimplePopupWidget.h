#pragma once
#include "CoreMinimal.h"
#include "SBPopupWidget.h"
#include "SBSimplePopupWidget.generated.h"

class UImage;
class UPanelWidget;
class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class SABERGAME_API USBSimplePopupWidget : public USBPopupWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* MessageText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Icon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* IconPanel;
    
public:
    USBSimplePopupWidget();
};

