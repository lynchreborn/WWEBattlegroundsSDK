#pragma once
#include "CoreMinimal.h"
#include "SBRootUserWidget.h"
#include "WWEComboInput.generated.h"

class UImage;
class USBPlatformIcon;
class USBRichTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class WWEPLAYGROUNDS_API UWWEComboInput : public USBRootUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBRichTextBlock* Base_Plus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBPlatformIcon* Base_PlatformIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* JoystickImage;
    
    UWWEComboInput();
};

