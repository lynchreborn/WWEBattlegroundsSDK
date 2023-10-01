#include "WWEMatchmakingConfigWidget.h"

void UWWEMatchmakingConfigWidget::OnUpdateSessionFailedMsgBoxClosed(ESBMessageBoxClosingReason Reason) {
}

void UWWEMatchmakingConfigWidget::OnUpdateSessionFailedDestroySessionMsgBoxClosed(ESBMessageBoxClosingReason Reason) {
}

void UWWEMatchmakingConfigWidget::OnShowConnectGamepad() {
}

void UWWEMatchmakingConfigWidget::OnRequestEnableInputForAllLocalPlayersCompleted() {
}

void UWWEMatchmakingConfigWidget::OnPlayerTypeGridSelectionChanged(int32 ColumnIdx, int32 RowIdx) {
}

void UWWEMatchmakingConfigWidget::OnLocalPlayerChangesMsgBoxClosed(ESBMessageBoxClosingReason Reason) {
}

void UWWEMatchmakingConfigWidget::OnGDPRMsgBoxClosed(ESBMessageBoxClosingReason Reason) {
}

void UWWEMatchmakingConfigWidget::OnCreateSessionFailedMsgBoxClosed(ESBMessageBoxClosingReason Reason) {
}

void UWWEMatchmakingConfigWidget::OnConfirmDestroySessionMsgBoxClosed(ESBMessageBoxClosingReason Reason) {
}

void UWWEMatchmakingConfigWidget::OnConfirmDestroySessionClientMsgBoxClosed(ESBMessageBoxClosingReason Reason) {
}

void UWWEMatchmakingConfigWidget::OnCheckPrivilegeMessageBoxErrorClosed() {
}

void UWWEMatchmakingConfigWidget::CreateSessionData() {
}

UWWEMatchmakingConfigWidget::UWWEMatchmakingConfigWidget() {
    this->PlayersSlotsHorizontalBox = NULL;
    this->LeftButtonTipsBar = NULL;
    this->RightButtonTipsBar = NULL;
    this->PlayerTypeGrid = NULL;
    this->ScreenTitle = NULL;
    this->InviteButtonTip = NULL;
    this->SelectButtonTip = NULL;
    this->MatchmakingPlayerSlotClass = NULL;
    this->VSWidgetClass = NULL;
    this->PlayerTypeGridElementClass = NULL;
    this->SessionState = 0;
    this->CurrentSlot = 0;
    this->DestroySessionReason = EPGDestroySessionReason::None;
    this->bSessionCanceled = false;
}

