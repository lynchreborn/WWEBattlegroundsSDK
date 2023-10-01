#pragma once
#include "CoreMinimal.h"
#include "ESBPopupSceneClosingReason.h"
#include "SBAlbumScreen.h"
#include "Templates/SubclassOf.h"
#include "WWEPowerUpsMenu.generated.h"

class AWWECharacterBox;
class UAudioComponent;
class USBPlatformBar;
class UWWECharacterParameters;
class UWWEMenuPowerUpsGrid;
class UWWEMenuPowerUpsSelected;
class UWWEPowerUpBase;
class UWWEPowerUpTooltip;
class UWWEUpgradePowerUpPopup;
class UWWEUserInfoHeader;

UCLASS(Blueprintable, EditInlineNew)
class WWEPLAYGROUNDS_API UWWEPowerUpsMenu : public USBAlbumScreen {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWWEMenuPowerUpsGrid* Tier1PowerUpsGrid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWWEMenuPowerUpsGrid* Tier2PowerUpsGrid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWWEMenuPowerUpsGrid* Tier3PowerUpsGrid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWWEUpgradePowerUpPopup* UpgradePowerUpPopup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWWEMenuPowerUpsSelected* MenuPowerUpsSelected;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWWEPowerUpTooltip* PowerUpToolTip;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBPlatformBar* BPRightPlatformBar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWWEUserInfoHeader* UserInfoHeader;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    UWWECharacterParameters* CharacterParameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    FString CharacterParamID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    AWWECharacterBox* CharacterBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AWWECharacterBox> CharacterBoxClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    TArray<UWWEPowerUpBase*> ConfiguredPowerUps;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    bool bCanUpdatePowerUps;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    bool bUpdateShopAfterFocus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    bool bCanUpgradePowerUp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UAudioComponent* AudioPlayer;
    
public:
    UWWEPowerUpsMenu();
    UFUNCTION(BlueprintCallable)
    void UpdateShopPowerUpsItems(bool EmptyCacheStore);
    
protected:
    UFUNCTION(BlueprintCallable)
    void ReplayFighterSong();
    
    UFUNCTION(BlueprintCallable)
    void OnTutorialPopupClosed(ESBPopupSceneClosingReason Reason);
    
    UFUNCTION(BlueprintCallable)
    void OnBackendCatalogueUpdated(bool bWasSuccessful);
    
};

