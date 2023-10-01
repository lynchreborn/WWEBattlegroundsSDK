#include "WWETournamentScreen.h"

void UWWETournamentScreen::OnRewardClaimed(ESBPopupSceneClosingReason ClosingReason) {
}

void UWWETournamentScreen::OnPopUpWonClaimed(ESBPopupSceneClosingReason ClosingReason) {
}

void UWWETournamentScreen::OnOKMsgBoxConfirmationClosed(ESBMessageBoxClosingReason Reason) {
}

UWWETournamentScreen::UWWETournamentScreen() {
    this->RoundsGrid = NULL;
    this->TitleTextWidget = NULL;
    this->TimesCompletedTextWidget = NULL;
    this->TimeRemainingTextWidget = NULL;
    this->TokensAmountTextWidget = NULL;
    this->RightPlatformBarWidget = NULL;
    this->LoadingWidget = NULL;
    this->RefreshAnimation = NULL;
    this->bIsScrolling = false;
    this->bTimeRemainingExpired = false;
}

