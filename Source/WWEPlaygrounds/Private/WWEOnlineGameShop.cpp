#include "WWEOnlineGameShop.h"

void UWWEOnlineGameShop::UnblockUserInput(ESBMessageBoxClosingReason Cause) {
}

void UWWEOnlineGameShop::ShowPurchasePopup() {
}

void UWWEOnlineGameShop::OnPurchasePopup(ESBPopupSceneClosingReason Cause) {
}

void UWWEOnlineGameShop::OnErrorUpdatingStoreClosed(ESBMessageBoxClosingReason Reason) {
}

void UWWEOnlineGameShop::ConfirmationPurchaseMsgClosed(ESBMessageBoxClosingReason Cause) {
}

UWWEOnlineGameShop::UWWEOnlineGameShop() {
    this->CurrentQuantity = 0;
    this->bWithHardCurrency = false;
    this->FinalPrice = 0;
    this->bItemPurchasedIsEmpty = false;
}

