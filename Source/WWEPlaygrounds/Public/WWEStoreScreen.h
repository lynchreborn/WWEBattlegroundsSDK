#pragma once
#include "CoreMinimal.h"
#include "EShopErrorResult.h"
#include "ESBMessageBoxClosingReason.h"
#include "ESBPopupSceneClosingReason.h"
#include "SBAlbumScreen.h"
#include "Templates/SubclassOf.h"
#include "WWEStoreScreen.generated.h"

class USBPlatformBar;
class USBStylizedText;
class UWWEGridArrow;
class UWWEStoreGrid;
class UWWEStoreGridElement;
class UWWEUserInfoHeader;
class UWidget;

UCLASS(Blueprintable, EditInlineNew)
class WWEPLAYGROUNDS_API UWWEStoreScreen : public USBAlbumScreen {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWWEStoreGrid* StoreGrid;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UWidget> StoreSlot1x1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UWidget> StoreSlot1x2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UWidget> StoreSlot2x1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UWidget> StoreSlot2x2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UWidget> StoreSlot3x1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UWidget> StoreSlot3x2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UWidget> StoreSlot4x1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UWidget> StoreSlot4x2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UWidget> StoreSlotExternal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWWEGridArrow* LeftArrow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWWEGridArrow* RightArrow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWWEUserInfoHeader* InfoHeaderHardCurrency;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBStylizedText* TitleTextBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBStylizedText* TaxMessage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText InternalStoreText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ExternalStoreText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    FString PurchasedItemId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    FString CurrencyId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    TMap<UWWEStoreGridElement*, FString> OnlineImageRequests;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    TMap<UWWEStoreGridElement*, FString> DownloadFileNameImages;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    UWWEStoreGridElement* ActualOfferLoading;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    TArray<FString> FileNamesToRemove;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBPlatformBar* RightPlatformBar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBPlatformBar* LeftPlatformBar;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    int32 DownloadImageRetries;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    bool bGridInitalized;
    
public:
    UWWEStoreScreen();
    UFUNCTION(BlueprintCallable)
    void UpdateStoreItems(bool EmptyCacheStore);
    
protected:
    UFUNCTION(BlueprintCallable)
    void ShowEmptyShopMessage();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnTutorialPopupClosed(ESBPopupSceneClosingReason Reason);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnPurchaseFinished(bool bSuccessful, EShopErrorResult ResultCode);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnItemPressedMessageBoxClosed(ESBMessageBoxClosingReason Reason);
    
    UFUNCTION(BlueprintCallable)
    void OnFileDeleteComplete(bool bSuccess, const FString& Filename);
    
    UFUNCTION(BlueprintCallable)
    void OnErrorCurrencyPopupClose();
    
    UFUNCTION(BlueprintCallable)
    void OnDownloadReadComplete(bool bSuccess, TArray<uint8>& Result, const FString& Filename);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnClosedPurchase();
    
    UFUNCTION(BlueprintCallable)
    void OnBackendCatalogueUpdated(bool bWasSuccessful);
    
protected:
    UFUNCTION(BlueprintCallable)
    void ErrorRefreshingShopMsgClosed();
    
public:
    UFUNCTION(BlueprintCallable)
    void DownloadImageCompleted(bool bWasSuccessful, const FString& Filename);
    
};

