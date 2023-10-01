#include "WWEUpgradePowerUpPopup.h"

void UWWEUpgradePowerUpPopup::ShowPowerUpCurrencyPrice() {
}

void UWWEUpgradePowerUpPopup::PurchasePowerUpCompleted(bool bWasSuccessful, EShopErrorResult ShopErrorCode) {
}

void UWWEUpgradePowerUpPopup::OnPurchaseCompleteMessageClosed() {
}

UWWEUpgradePowerUpPopup::UWWEUpgradePowerUpPopup() {
    this->TextName = NULL;
    this->TextLevelValue = NULL;
    this->TextDescription = NULL;
    this->TextLeft1 = NULL;
    this->TextLeft2 = NULL;
    this->TextLeft3 = NULL;
    this->TextRight1 = NULL;
    this->TextRight2 = NULL;
    this->TextRight3 = NULL;
    this->Icon = NULL;
    this->HardCurrencyButton = NULL;
    this->SoftCurrencyButton = NULL;
    this->BPRightPlatformBar = NULL;
    this->UpgrandePowerUpPopup_Pulse = NULL;
    this->BasicTextStyle = NULL;
    this->PreviousTextStyle = NULL;
    this->SelectedTextStyle = NULL;
    this->SelectedPowerUpSlot = NULL;
    this->PowerUpsMenu = NULL;
    this->CachedSaveGame = NULL;
    this->bPurchasableByHardCurrency = false;
    this->bPurchasableBySoftCurrency = false;
}

