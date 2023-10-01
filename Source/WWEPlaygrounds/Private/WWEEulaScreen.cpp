#include "WWEEulaScreen.h"

UWWEEulaScreen::UWWEEulaScreen() {
    this->RightPlatformBar = NULL;
    this->bHasBeenRead = false;
    this->ScrollBox = NULL;
    this->GDPRActiveUser = NULL;
    this->Header = NULL;
    this->CountdownTotalTime = 5.00f;
    this->PreActivationAlpha = 0.35f;
    this->ScrollSpeed = 3.50f;
    this->BlockSeparator = TEXT("\n\n\n");
    this->ChangeTime = 1.20f;
}

