#pragma once
#include "CoreMinimal.h"
#include "PGOnlineGameShop.h"
#include "ESBMessageBoxClosingReason.h"
#include "ESBPopupSceneClosingReason.h"
#include "WWEOnlineGameShop.generated.h"

UCLASS(Blueprintable)
class WWEPLAYGROUNDS_API UWWEOnlineGameShop : public UPGOnlineGameShop {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    FString TransactionId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    int32 CurrentQuantity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    bool bWithHardCurrency;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    int32 FinalPrice;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    bool bItemPurchasedIsEmpty;
    
public:
    UWWEOnlineGameShop();
private:
    UFUNCTION(BlueprintCallable)
    void UnblockUserInput(ESBMessageBoxClosingReason Cause);
    
    UFUNCTION(BlueprintCallable)
    void ShowPurchasePopup();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnPurchasePopup(ESBPopupSceneClosingReason Cause);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnErrorUpdatingStoreClosed(ESBMessageBoxClosingReason Reason);
    
    UFUNCTION(BlueprintCallable)
    void ConfirmationPurchaseMsgClosed(ESBMessageBoxClosingReason Cause);
    
};

