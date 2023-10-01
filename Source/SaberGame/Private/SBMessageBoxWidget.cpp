#include "SBMessageBoxWidget.h"

void USBMessageBoxWidget::SetMessageText(const FText& NewText) {
}

void USBMessageBoxWidget::RefreshFocus() {
}

void USBMessageBoxWidget::OpenScreen() {
}

void USBMessageBoxWidget::OnOpenCompleted() {
}

void USBMessageBoxWidget::OnCloseCompleted() {
}

void USBMessageBoxWidget::CloseScreen(bool bForce) {
}

USBMessageBoxWidget::USBMessageBoxWidget() {
    this->MinOpenTimeForNonInteractive = 0.00f;
    this->Text_Title = NULL;
    this->Text_Message = NULL;
    this->VisibilityButton1 = ESlateVisibility::Visible;
    this->VisibilityButton2 = ESlateVisibility::Visible;
    this->OpenAnimation = NULL;
    this->CloseAnimation = NULL;
    this->LoopAnimation = NULL;
    this->WaitingIcon = NULL;
    this->OnOpenSound = NULL;
    this->Button_Left = NULL;
    this->Button_Right = NULL;
    this->TextBlock_Left = NULL;
    this->TextBlock_Right = NULL;
}

