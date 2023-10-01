#pragma once
#include "CoreMinimal.h"
#include "SBUserWidget.h"
#include "WWEPurchasePopupPanel.generated.h"

class UWWEPurchasePopupButton;
class UWWEPurchasePopupScreen;

UCLASS(Blueprintable, EditInlineNew)
class WWEPLAYGROUNDS_API UWWEPurchasePopupPanel : public USBUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWWEPurchasePopupButton* SoftCurrencyButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWWEPurchasePopupButton* HardCurrencyButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UWWEPurchasePopupScreen* MyScreen;
    
public:
    UWWEPurchasePopupPanel();
};

