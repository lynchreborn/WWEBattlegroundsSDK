#pragma once
#include "CoreMinimal.h"
#include "EShopErrorResult.h"
#include "ESBMessageBoxClosingReason.h"
#include "ESBPopupSceneClosingReason.h"
#include "SBAlbumScreen.h"
#include "WWEWrestlersMainScreen.generated.h"

class UAudioComponent;
class USBPlatformBar;
class USBPlatformSlot;
class USoundBase;
class UWWECharacterParameters;
class UWWEFilterBar;
class UWWEUserInfoHeader;
class UWWEWrestlersMainGrid;
class UWWEWrestlersMainGridSlot;

UCLASS(Blueprintable, EditInlineNew)
class WWEPLAYGROUNDS_API UWWEWrestlersMainScreen : public USBAlbumScreen {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWWEFilterBar* FilterBar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBPlatformBar* RightButtons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBPlatformBar* LeftButtons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWWEWrestlersMainGrid* Grid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWWEUserInfoHeader* UserInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFilterEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    UWWECharacterParameters* CachedCharacterParameterToDelete;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USBPlatformSlot* DeleteCustomButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USBPlatformSlot* BuyCharacterButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USBPlatformSlot* ApplyFilterButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USBPlatformSlot* ViewCharacterDetailsButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UWWEWrestlersMainGridSlot* CachedSlotSelected;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeToActivateMusic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeToActivateBuySound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UAudioComponent* MMAudioPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UAudioComponent* WAudioPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USoundBase* MMSound;
    
public:
    UWWEWrestlersMainScreen();
protected:
    UFUNCTION(BlueprintCallable)
    void UpdateShopCharacters(bool EmptyCacheStore);
    
    UFUNCTION(BlueprintCallable)
    void PlayEntranceMusic();
    
    UFUNCTION(BlueprintCallable)
    void OnTutorialPopupClosed(ESBPopupSceneClosingReason Reason);
    
    UFUNCTION(BlueprintCallable)
    void OnScreenTransitionEnds();
    
    UFUNCTION(BlueprintCallable)
    void OnPurchaseFinished(bool bSuccessful, EShopErrorResult ResultCode);
    
    UFUNCTION(BlueprintCallable)
    void OnPurchaseCompleteMessageClosed();
    
    UFUNCTION(BlueprintCallable)
    void OnDeleteConfirmationClosed(ESBMessageBoxClosingReason Reason);
    
    UFUNCTION(BlueprintCallable)
    void OnClosedPurchase();
    
    UFUNCTION(BlueprintCallable)
    void OnBackendCatalogueUpdated(bool bWasSuccessful);
    
    UFUNCTION(BlueprintCallable)
    void ExitWrestlersMenu_TransitionFinished();
    
    UFUNCTION(BlueprintCallable)
    void ExitWrestlersMenu_MessageBoxClosed(ESBMessageBoxClosingReason Reason);
    
};

