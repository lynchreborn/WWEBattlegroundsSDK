#include "WWEArenaEditorScreen.h"

void UWWEArenaEditorScreen::UpdateShopArenaItems(bool EmptyCacheStore) {
}

void UWWEArenaEditorScreen::SetArenaSection(EWWEArenaSectionType ArenaSectionArg) {
}

void UWWEArenaEditorScreen::RevertNextArenaSectionInOutfit() {
}

void UWWEArenaEditorScreen::OnWantQuitEditorMsgClosed(ESBPopupSceneClosingReason Cause) {
}

void UWWEArenaEditorScreen::OnTutorialPopupClosed(ESBPopupSceneClosingReason Reason) {
}

void UWWEArenaEditorScreen::OnPurchaseFinished(bool bSuccessful, EShopErrorResult ResultCode) {
}

void UWWEArenaEditorScreen::OnConfirmationWantQuitEditorMsgClosed(ESBMessageBoxClosingReason Cause) {
}

void UWWEArenaEditorScreen::OnConfirmationWantModifyNameAliasMsgClosed(ESBMessageBoxClosingReason Cause) {
}

void UWWEArenaEditorScreen::OnClosedPurchase() {
}

void UWWEArenaEditorScreen::OnBackendCatalogueUpdated(bool bWasSuccessful) {
}

void UWWEArenaEditorScreen::BackMessageBoxClosed(ESBMessageBoxClosingReason Cause) {
}

UWWEArenaEditorScreen::UWWEArenaEditorScreen() {
    this->LeftPlatformBar = NULL;
    this->RightPlatformBar = NULL;
    this->FinishPlatformBar = NULL;
    this->SelectionLayout = NULL;
    this->ArenaItemGrid = NULL;
    this->ArenaWeaponGrid = NULL;
    this->CurrencyInfo = NULL;
    this->HeightSelection = NULL;
    this->SubSectionGrid = NULL;
    this->GridCanvasPanel = NULL;
    this->ArenaNameSelection = NULL;
    this->delayLevelSequence = 0.00f;
    this->UpArrow = NULL;
    this->DownArrow = NULL;
    this->CurrentSelectedArenaSection = EWWEArenaSectionType::NONE;
    this->ArenaItemLoading = NULL;
    this->bRevertingArenaItem = false;
    this->bIsInPreviewMode = false;
    this->bIsCameraInArenaSection = false;
    this->PreviewWidget = NULL;
    this->CurrentArenaGrid = NULL;
    this->FinishButtonAnimationRef = NULL;
    this->GameMode = NULL;
    this->CachedGridElementSelected = NULL;
    this->ParticleManagerCached = NULL;
    this->LastFocusedWidget = NULL;
    this->bSaveBeforeExit = false;
    this->PreviousUnlockVisibility = ESlateVisibility::Visible;
    this->bCanBuyItem = false;
}

