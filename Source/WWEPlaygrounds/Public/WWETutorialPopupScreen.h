#pragma once
#include "CoreMinimal.h"
#include "SBPopupWidget.h"
#include "WWETutorialPopupScreen.generated.h"

class UWWETutorialPopupBoxWidget;

UCLASS(Blueprintable, EditInlineNew)
class WWEPLAYGROUNDS_API UWWETutorialPopupScreen : public USBPopupWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWWETutorialPopupBoxWidget* PopupWidget;
    
    UWWETutorialPopupScreen();
};

