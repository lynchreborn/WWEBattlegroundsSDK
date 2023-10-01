#include "WWECodesScreen.h"

void UWWECodesScreen::OnNameChanged(const FText& Text) {
}

void UWWECodesScreen::OnHideScreen() {
}

void UWWECodesScreen::OnCodeComitted(const FText& Text, TEnumAsByte<ETextCommit::Type> CommitMethod) {
}

UWWECodesScreen::UWWECodesScreen() {
    this->CodesTextInput = NULL;
    this->RightPlatformBar = NULL;
    this->EnterSound = NULL;
    this->SuccessExitSound = NULL;
    this->ErrorExitSound = NULL;
    this->RootParent = NULL;
    this->PreviousFocusedWidget = NULL;
}

