#include "WWEGDPRScreen.h"

void UWWEGDPRScreen::ProcessGDPR_OnMessageBoxClosed(ESBMessageBoxClosingReason Cause) {
}

UWWEGDPRScreen::UWWEGDPRScreen() {
    this->RightPlatformBar = NULL;
    this->GDPRMainText = NULL;
    this->GDPRActiveUser = NULL;
    this->GDPRScroll = NULL;
    this->bHasBeenRead = false;
    this->Temp_GDPRWasAccepted = false;
    this->ScrollSpeed = 3.50f;
    this->BlockSeparator = TEXT("\n\n\n");
}

