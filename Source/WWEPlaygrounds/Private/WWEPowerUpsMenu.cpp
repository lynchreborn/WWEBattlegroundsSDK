#include "WWEPowerUpsMenu.h"

void UWWEPowerUpsMenu::UpdateShopPowerUpsItems(bool EmptyCacheStore) {
}

void UWWEPowerUpsMenu::ReplayFighterSong() {
}

void UWWEPowerUpsMenu::OnTutorialPopupClosed(ESBPopupSceneClosingReason Reason) {
}

void UWWEPowerUpsMenu::OnBackendCatalogueUpdated(bool bWasSuccessful) {
}

UWWEPowerUpsMenu::UWWEPowerUpsMenu() {
    this->Tier1PowerUpsGrid = NULL;
    this->Tier2PowerUpsGrid = NULL;
    this->Tier3PowerUpsGrid = NULL;
    this->UpgradePowerUpPopup = NULL;
    this->MenuPowerUpsSelected = NULL;
    this->PowerUpToolTip = NULL;
    this->BPRightPlatformBar = NULL;
    this->UserInfoHeader = NULL;
    this->CharacterParameters = NULL;
    this->CharacterBox = NULL;
    this->CharacterBoxClass = NULL;
    this->bCanUpdatePowerUps = false;
    this->bUpdateShopAfterFocus = false;
    this->bCanUpgradePowerUp = false;
    this->AudioPlayer = NULL;
}

