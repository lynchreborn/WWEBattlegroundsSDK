#include "PGGameStateMainMenu.h"

void APGGameStateMainMenu::RestoreFocusToMainMenu() {
}

void APGGameStateMainMenu::OnPartyPlaySessionSizePopupClosed(ESBPopupSceneClosingReason CloseReason) {
}

void APGGameStateMainMenu::OnConfirmJoinErrorMsgBoxClosed(ESBMessageBoxClosingReason Reason) {
}

APGGameStateMainMenu::APGGameStateMainMenu() {
    this->SessionState = -1;
    this->bFromJoinSessionInvitationFail = false;
}

