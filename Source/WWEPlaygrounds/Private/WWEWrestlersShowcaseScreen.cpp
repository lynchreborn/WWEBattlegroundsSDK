#include "WWEWrestlersShowcaseScreen.h"

void UWWEWrestlersShowcaseScreen::OnDeleteConfirmationClosed(ESBMessageBoxClosingReason Reason) {
}

void UWWEWrestlersShowcaseScreen::ExitWrestlersMenu_TransitionFinished() {
}

void UWWEWrestlersShowcaseScreen::ExitWrestlersMenu_MessageBoxClosed(ESBMessageBoxClosingReason Reason) {
}

UWWEWrestlersShowcaseScreen::UWWEWrestlersShowcaseScreen() {
    this->FilterBar = NULL;
    this->RightButtons = NULL;
    this->Grid = NULL;
    this->CachedCharacterParameterToDelete = NULL;
    this->DeleteCustomButton = NULL;
    this->BuyCharacterButton = NULL;
}

