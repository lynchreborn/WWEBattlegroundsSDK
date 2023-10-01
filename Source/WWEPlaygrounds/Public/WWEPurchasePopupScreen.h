#pragma once
#include "CoreMinimal.h"
#include "SBRootUserWidget.h"
#include "WWEPurchasePopupScreen.generated.h"

class USBGrayableImage;
class UWWEPurchasePopupPanel;
class UWWEUserInfoHeader;
class UWidget;

UCLASS(Blueprintable, EditInlineNew)
class WWEPLAYGROUNDS_API UWWEPurchasePopupScreen : public USBRootUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWWEPurchasePopupPanel* PurchasePanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* IconCanvas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWWEUserInfoHeader* CurrencyInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBGrayableImage* ItemImage;
    
public:
    UWWEPurchasePopupScreen();
};

