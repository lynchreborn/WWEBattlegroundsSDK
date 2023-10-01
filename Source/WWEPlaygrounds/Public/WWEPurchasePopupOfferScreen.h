#pragma once
#include "CoreMinimal.h"
#include "WWEPurchasePopupScreen.h"
#include "WWEPurchasePopupOfferScreen.generated.h"

class UScrollBox;
class UTextBlock;
class UWWEStoreGridElement;

UCLASS(Blueprintable, EditInlineNew)
class WWEPLAYGROUNDS_API UWWEPurchasePopupOfferScreen : public UWWEPurchasePopupScreen {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWWEStoreGridElement* StoreItemSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* ItemDescription;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UScrollBox* DescriptionScrollBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ScrollSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    float ScrollAmount;
    
public:
    UWWEPurchasePopupOfferScreen();
};

