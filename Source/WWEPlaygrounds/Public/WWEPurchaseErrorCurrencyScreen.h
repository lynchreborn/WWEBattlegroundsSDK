#pragma once
#include "CoreMinimal.h"
#include "SBRootUserWidget.h"
#include "WWEPurchaseErrorCurrencyScreen.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class WWEPLAYGROUNDS_API UWWEPurchaseErrorCurrencyScreen : public USBRootUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName GetGoldenAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    bool bShowedPlatformStore;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    bool bOfferStore;
    
public:
    UWWEPurchaseErrorCurrencyScreen();
protected:
    UFUNCTION(BlueprintCallable)
    void OnPlatformStoreClose();
    
};

