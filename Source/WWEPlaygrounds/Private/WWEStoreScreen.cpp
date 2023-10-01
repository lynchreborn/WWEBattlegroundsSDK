#include "WWEStoreScreen.h"

void UWWEStoreScreen::UpdateStoreItems(bool EmptyCacheStore) {
}

void UWWEStoreScreen::ShowEmptyShopMessage() {
}

void UWWEStoreScreen::OnTutorialPopupClosed(ESBPopupSceneClosingReason Reason) {
}

void UWWEStoreScreen::OnPurchaseFinished(bool bSuccessful, EShopErrorResult ResultCode) {
}

void UWWEStoreScreen::OnItemPressedMessageBoxClosed(ESBMessageBoxClosingReason Reason) {
}

void UWWEStoreScreen::OnFileDeleteComplete(bool bSuccess, const FString& Filename) {
}

void UWWEStoreScreen::OnErrorCurrencyPopupClose() {
}

void UWWEStoreScreen::OnDownloadReadComplete(bool bSuccess, TArray<uint8>& Result, const FString& Filename) {
}

void UWWEStoreScreen::OnClosedPurchase() {
}

void UWWEStoreScreen::OnBackendCatalogueUpdated(bool bWasSuccessful) {
}

void UWWEStoreScreen::ErrorRefreshingShopMsgClosed() {
}

void UWWEStoreScreen::DownloadImageCompleted(bool bWasSuccessful, const FString& Filename) {
}

UWWEStoreScreen::UWWEStoreScreen() {
    this->StoreGrid = NULL;
    this->StoreSlot1x1 = NULL;
    this->StoreSlot1x2 = NULL;
    this->StoreSlot2x1 = NULL;
    this->StoreSlot2x2 = NULL;
    this->StoreSlot3x1 = NULL;
    this->StoreSlot3x2 = NULL;
    this->StoreSlot4x1 = NULL;
    this->StoreSlot4x2 = NULL;
    this->StoreSlotExternal = NULL;
    this->LeftArrow = NULL;
    this->RightArrow = NULL;
    this->InfoHeaderHardCurrency = NULL;
    this->TitleTextBlock = NULL;
    this->TaxMessage = NULL;
    this->ActualOfferLoading = NULL;
    this->RightPlatformBar = NULL;
    this->LeftPlatformBar = NULL;
    this->DownloadImageRetries = 0;
    this->bGridInitalized = false;
}

