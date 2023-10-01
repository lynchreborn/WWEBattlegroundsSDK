#pragma once
#include "CoreMinimal.h"
#include "WWEPurchasePopupButton.h"
#include "WWEPurchasePowerUpButton.generated.h"

class USBPlatformIcon;

UCLASS(Blueprintable, EditInlineNew)
class WWEPLAYGROUNDS_API UWWEPurchasePowerUpButton : public UWWEPurchasePopupButton {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBPlatformIcon* HardCurrencyIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBPlatformIcon* SoftCurrencyIcon;
    
public:
    UWWEPurchasePowerUpButton();
};

