#include "WWEWrestlersDetailsScreen.h"

void UWWEWrestlersDetailsScreen::UpdateShopCharacters(bool EmptyCacheStore) {
}

void UWWEWrestlersDetailsScreen::ReplayFighterSong() {
}

void UWWEWrestlersDetailsScreen::OnShowBio() {
}

void UWWEWrestlersDetailsScreen::OnPurchaseFinished(bool bSuccessful, EShopErrorResult ResultCode) {
}

void UWWEWrestlersDetailsScreen::OnPurchaseCompleteMessageClosed() {
}

void UWWEWrestlersDetailsScreen::OnFinishedDeletingOutfit(bool bSuccess, bool bIsUpdate, const FString& CharacterID) {
}

void UWWEWrestlersDetailsScreen::OnEditSkillTree() {
}

void UWWEWrestlersDetailsScreen::OnEditPowerUps() {
}

void UWWEWrestlersDetailsScreen::OnDeleteOutfit() {
}

void UWWEWrestlersDetailsScreen::OnDeleteConfirmationClosed(ESBMessageBoxClosingReason Reason) {
}

void UWWEWrestlersDetailsScreen::OnCustomizeCharacter() {
}

void UWWEWrestlersDetailsScreen::OnClosedPurchase() {
}

void UWWEWrestlersDetailsScreen::OnBackendCatalogueUpdated(bool bWasSuccessful) {
}

void UWWEWrestlersDetailsScreen::ExitWrestlersDetailsMenu_MessageBoxClosed(ESBMessageBoxClosingReason Reason) {
}

UWWEWrestlersDetailsScreen::UWWEWrestlersDetailsScreen() {
    this->RightButtons = NULL;
    this->LeftButtons = NULL;
    this->PowerUps = NULL;
    this->FightingStyle = NULL;
    this->Grid = NULL;
    this->RewardsList = NULL;
    this->UserInfo = NULL;
    this->CharacterParameters = NULL;
    this->SelectedCharacterBox = NULL;
    this->CustomizeCharacterButton = NULL;
    this->EditFightTreeCustomButton = NULL;
    this->EditPowerUpsCustomButton = NULL;
    this->ShowBioButton = NULL;
    this->AcceptButton = NULL;
    this->BuyCharacterButton = NULL;
    this->AudioPlayer = NULL;
}

