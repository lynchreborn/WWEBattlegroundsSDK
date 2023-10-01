#include "WWECharacterEditorScreen.h"

void UWWECharacterEditorScreen::UpdateShopVanityItems(bool EmptyCacheStore) {
}

void UWWECharacterEditorScreen::OnWantQuitEditorMsgClosed(ESBPopupSceneClosingReason Cause) {
}

void UWWECharacterEditorScreen::OnUploadContentComplete(bool bSuccess, const FContentUploadData& UploadContent) {
}

void UWWECharacterEditorScreen::OnTutorialModifyPopupClosed(ESBPopupSceneClosingReason Reason) {
}

void UWWECharacterEditorScreen::OnTutorialCreatePopupClosed(ESBPopupSceneClosingReason Reason) {
}

void UWWECharacterEditorScreen::OnPurchaseFinished(bool bSuccessful, EShopErrorResult ResultCode) {
}

void UWWECharacterEditorScreen::OnConfirmationWantQuitEditorMsgClosed(ESBMessageBoxClosingReason Cause) {
}

void UWWECharacterEditorScreen::OnConfirmationWantModifyNameAliasMsgClosed(ESBMessageBoxClosingReason Cause) {
}

void UWWECharacterEditorScreen::OnClosedPurchase() {
}

void UWWECharacterEditorScreen::OnCharacterCreationErrorMsgBoxClosed() {
}

void UWWECharacterEditorScreen::OnBackendCatalogueUpdated(bool bWasSuccessful) {
}

void UWWECharacterEditorScreen::MessageBoxClosingReasonOK() {
}

void UWWECharacterEditorScreen::ExitToMainMenu() {
}

void UWWECharacterEditorScreen::ConfirmationWantModifyCharacterEditorMsg(ESBMessageBoxClosingReason Cause) {
}

void UWWECharacterEditorScreen::ConfirmationWantBackEditorMsg(ESBMessageBoxClosingReason Cause) {
}

void UWWECharacterEditorScreen::CapturePhotomatonAfterPrepareScene() {
}

UWWECharacterEditorScreen::UWWECharacterEditorScreen() {
    this->bResetHeightValue = false;
    this->bHeadCanChangeSkinColor = true;
    this->GenderItemInPreview = EWWEGender::Male;
    this->FightStyleItemInPreview = EWWEFightingStyle::Technician;
    this->BodyItemInPreview = EPGCharacterBody::CharacterBody01;
    this->AliasIDItemInPreview = 0;
    this->HeightItemInPreview = 0.00f;
    this->AlternateCurrencyAnimationTime = 0.00f;
    this->AlternateCurrencyAnimationTimeMax = 0.00f;
    this->SelectionLayout = NULL;
    this->RotateInputController = NULL;
    this->LeftPlatformBar = NULL;
    this->RightPlatformBar = NULL;
    this->CharacterSpawnerEditor = NULL;
    this->BoxSpawnerEditor = NULL;
    this->CreateCustomBackground = NULL;
    this->CharacterClass = NULL;
    this->OnFinishEditorSoundCue = NULL;
    this->CachedSlotPurchased = NULL;
    this->bUpdateShopAfterFocus = false;
    this->PhotomatonCustomCharacter = NULL;
    this->CharacterEditorTV = NULL;
    this->bKeyBoardZoomDelta = false;
    this->bZoomInPressed = false;
    this->bZoomOutPressed = false;
    this->KeyBoardZoomDeltaTime = 0.00f;
    this->KeyBoardZoomSpeed = 0.00f;
    this->bEditingInfo = false;
    this->bCharacterLoaded = false;
    this->bBoxLoaded = false;
    this->bIsNewCharacter = false;
    this->bSaveBeforeExit = false;
    this->LastFocusedWidget = NULL;
}

