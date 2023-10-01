#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "SBParallaxButtonText.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class SABERGAME_API USBParallaxButtonText : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ParallaxButtonText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString TextBoxDivider;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInvertWidgetOrderWhenRightToLeft;
    
    USBParallaxButtonText();
};

