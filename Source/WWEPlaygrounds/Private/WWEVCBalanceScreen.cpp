#include "WWEVCBalanceScreen.h"

void UWWEVCBalanceScreen::OnGetVCBalanceErrorMsgBoxClosed(ESBMessageBoxClosingReason Cause) {
}

UWWEVCBalanceScreen::UWWEVCBalanceScreen() {
    this->MenuBackground = NULL;
    this->PopupBackground = NULL;
    this->WindowPanel = NULL;
    this->WindowBackground = NULL;
    this->BalanceText = NULL;
    this->PurchasedText = NULL;
    this->EarnedText = NULL;
    this->ExpiredScroll = NULL;
    this->ScrollText = NULL;
    this->ButtonsBar = NULL;
    this->ScrollSpeed = 3.50f;
}

