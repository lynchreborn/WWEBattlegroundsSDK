#pragma once
#include "CoreMinimal.h"
#include "SBUserWidget.h"
#include "SBTipsWidget.generated.h"

class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class SABERGAME_API USBTipsWidget : public USBUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* TipsText;
    
public:
    USBTipsWidget();
    UFUNCTION(BlueprintCallable)
    void UpdateTip();
    
};

