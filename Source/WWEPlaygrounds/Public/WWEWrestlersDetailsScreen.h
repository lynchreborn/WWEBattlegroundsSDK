#pragma once
#include "CoreMinimal.h"
#include "EShopErrorResult.h"
#include "ESBMessageBoxClosingReason.h"
#include "SBRootUserWidget.h"
#include "WWEWrestlersDetailsScreen.generated.h"

class AWWEOutfitCharacterBox;
class UAudioComponent;
class USBPlatformBar;
class USBPlatformSlot;
class UWWECharacterParameters;
class UWWEPowerUpBase;
class UWWERewardsList;
class UWWEUserInfoHeader;
class UWWEWrestlersDetailsFightingStyle;
class UWWEWrestlersDetailsPoolGrid;
class UWWEWrestlersDetailsPowerUps;

UCLASS(Blueprintable, EditInlineNew)
class WWEPLAYGROUNDS_API UWWEWrestlersDetailsScreen : public USBRootUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBPlatformBar* RightButtons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBPlatformBar* LeftButtons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWWEWrestlersDetailsPowerUps* PowerUps;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWWEWrestlersDetailsFightingStyle* FightingStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWWEWrestlersDetailsPoolGrid* Grid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWWERewardsList* RewardsList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWWEUserInfoHeader* UserInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWWECharacterParameters* CharacterParameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UWWEPowerUpBase*> ConfiguredPowerUps;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FString CharacterParamID;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    AWWEOutfitCharacterBox* SelectedCharacterBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USBPlatformSlot* CustomizeCharacterButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USBPlatformSlot* EditFightTreeCustomButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USBPlatformSlot* EditPowerUpsCustomButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USBPlatformSlot* ShowBioButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USBPlatformSlot* AcceptButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USBPlatformSlot* BuyCharacterButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UAudioComponent* AudioPlayer;
    
public:
    UWWEWrestlersDetailsScreen();
protected:
    UFUNCTION(BlueprintCallable)
    void UpdateShopCharacters(bool EmptyCacheStore);
    
private:
    UFUNCTION(BlueprintCallable)
    void ReplayFighterSong();
    
    UFUNCTION(BlueprintCallable)
    void OnShowBio();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnPurchaseFinished(bool bSuccessful, EShopErrorResult ResultCode);
    
    UFUNCTION(BlueprintCallable)
    void OnPurchaseCompleteMessageClosed();
    
    UFUNCTION(BlueprintCallable)
    void OnFinishedDeletingOutfit(bool bSuccess, bool bIsUpdate, const FString& CharacterID);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnEditSkillTree();
    
    UFUNCTION(BlueprintCallable)
    void OnEditPowerUps();
    
    UFUNCTION(BlueprintCallable)
    void OnDeleteOutfit();
    
    UFUNCTION(BlueprintCallable)
    void OnDeleteConfirmationClosed(ESBMessageBoxClosingReason Reason);
    
    UFUNCTION(BlueprintCallable)
    void OnCustomizeCharacter();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnClosedPurchase();
    
    UFUNCTION(BlueprintCallable)
    void OnBackendCatalogueUpdated(bool bWasSuccessful);
    
    UFUNCTION(BlueprintCallable)
    void ExitWrestlersDetailsMenu_MessageBoxClosed(ESBMessageBoxClosingReason Reason);
    
};

