#include "WWEPopupWebBrowserScreen.h"

UWWEPopupWebBrowserScreen::UWWEPopupWebBrowserScreen() {
    this->ImageHtml = NULL;
    this->CP_Loading = NULL;
    this->ScrollSpeed = 10.00f;
    this->LerpScrollSpeed = 1.00f;
    this->lerpValue = 0.00f;
    this->scrolling = false;
    this->originalScrolllOffset = 0.00f;
    this->targetScrollOffset = 0.00f;
}

