#pragma once
#include "CoreMinimal.h"
#include "SBUserWidget.h"
#include "SBSimpleSelectorIconWidget.generated.h"

class UWidget;

UCLASS(Blueprintable, EditInlineNew)
class SABERGAME_API USBSimpleSelectorIconWidget : public USBUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* ShowingIndicator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* HiddenIndicator;
    
public:
    USBSimpleSelectorIconWidget();
};

