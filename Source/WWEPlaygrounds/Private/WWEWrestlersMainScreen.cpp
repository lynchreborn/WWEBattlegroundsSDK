#include "WWEWrestlersMainScreen.h"

void UWWEWrestlersMainScreen::UpdateShopCharacters(bool EmptyCacheStore) {
}

void UWWEWrestlersMainScreen::PlayEntranceMusic() {
}

void UWWEWrestlersMainScreen::OnTutorialPopupClosed(ESBPopupSceneClosingReason Reason) {
}

void UWWEWrestlersMainScreen::OnScreenTransitionEnds() {
}

void UWWEWrestlersMainScreen::OnPurchaseFinished(bool bSuccessful, EShopErrorResult ResultCode) {
}

void UWWEWrestlersMainScreen::OnPurchaseCompleteMessageClosed() {
}

void UWWEWrestlersMainScreen::OnDeleteConfirmationClosed(ESBMessageBoxClosingReason Reason) {
}

void UWWEWrestlersMainScreen::OnClosedPurchase() {
}

void UWWEWrestlersMainScreen::OnBackendCatalogueUpdated(bool bWasSuccessful) {
}

void UWWEWrestlersMainScreen::ExitWrestlersMenu_TransitionFinished() {
}

void UWWEWrestlersMainScreen::ExitWrestlersMenu_MessageBoxClosed(ESBMessageBoxClosingReason Reason) {
}

UWWEWrestlersMainScreen::UWWEWrestlersMainScreen() {
    this->FilterBar = NULL;
    this->RightButtons = NULL;
    this->LeftButtons = NULL;
    this->Grid = NULL;
    this->UserInfo = NULL;
    this->bFilterEnabled = true;
    this->CachedCharacterParameterToDelete = NULL;
    this->DeleteCustomButton = NULL;
    this->BuyCharacterButton = NULL;
    this->ApplyFilterButton = NULL;
    this->ViewCharacterDetailsButton = NULL;
    this->CachedSlotSelected = NULL;
    this->TimeToActivateMusic = 0.50f;
    this->TimeToActivateBuySound = 1.00f;
    this->MMAudioPlayer = NULL;
    this->WAudioPlayer = NULL;
    this->MMSound = NULL;
}

