#include "WWEIngameMenuButton.h"

void UWWEIngameMenuButton::OnConfirmationWantToExitMsgClosed(ESBMessageBoxClosingReason Reason) {
}

UWWEIngameMenuButton::UWWEIngameMenuButton() {
    this->ButtonAction = EWWEIngameMenuAction::None;
    this->OnNavigatedSoundCue = NULL;
}

