#include "SBRootUserWidget.h"

void USBRootUserWidget::SetAllFocusTo(UWidget* Target) {
}


void USBRootUserWidget::OnCancel(int32 UserIdx) {
}

void USBRootUserWidget::OnAccept(int32 UserIdx) {
}

void USBRootUserWidget::InitFocus(bool bAllowMultipleFocus, EFocusCause Cause) {
}

void USBRootUserWidget::ClearInnerFocusCache() {
}

USBRootUserWidget::USBRootUserWidget() {
    this->Scene = NULL;
    this->WidgetToFocus = NULL;
    this->OnAcceptSoundCue = NULL;
    this->OnCancelSoundCue = NULL;
    this->bCanCache = false;
}

