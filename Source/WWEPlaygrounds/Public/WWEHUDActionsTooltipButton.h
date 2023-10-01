#pragma once
#include "CoreMinimal.h"
#include "SBUserWidget.h"
#include "WWEHUDActionsTooltipButton.generated.h"

class UHorizontalBox;
class USBStylizedText;

UCLASS(Blueprintable, EditInlineNew)
class WWEPLAYGROUNDS_API UWWEHUDActionsTooltipButton : public USBUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHorizontalBox* ButtonsSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBStylizedText* ButtonExtraText;
    
public:
    UWWEHUDActionsTooltipButton();
};

