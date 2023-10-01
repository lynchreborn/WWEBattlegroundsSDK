#include "PGMatchmakingSearchWidget.h"

void UPGMatchmakingSearchWidget::OnUpdateSessionFailedMsgBoxClosed(const ESBMessageBoxClosingReason Reason) {
}

void UPGMatchmakingSearchWidget::OnReturnToMatchmakingMsgBoxClosed(const ESBMessageBoxClosingReason Reason) {
}

void UPGMatchmakingSearchWidget::OnPlayerHostedMatchProcessinMsgBoxClosed(const ESBMessageBoxClosingReason Reason) {
}

void UPGMatchmakingSearchWidget::OnPlatformSessionProcessFailedMsgBoxClosed(const ESBMessageBoxClosingReason Reason) {
}

void UPGMatchmakingSearchWidget::OnMatchmakingErrorMessageBoxClosed(const ESBMessageBoxClosingReason Reason) {
}

void UPGMatchmakingSearchWidget::OnMatchmakingConnectingErrorMessageBoxClosed(const ESBMessageBoxClosingReason Reason) {
}

void UPGMatchmakingSearchWidget::OnMatchmakeInEditor(const ESBMessageBoxClosingReason Reason) {
}

void UPGMatchmakingSearchWidget::OnExitMessageBoxClosed(const ESBMessageBoxClosingReason Reason) {
}

UPGMatchmakingSearchWidget::UPGMatchmakingSearchWidget() {
    this->MatchModeText = NULL;
    this->bCancellingMatchmaking = false;
    this->bImMatchmakingInvitee = false;
}

