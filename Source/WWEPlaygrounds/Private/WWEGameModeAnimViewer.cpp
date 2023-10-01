#include "WWEGameModeAnimViewer.h"

void AWWEGameModeAnimViewer::OnCharacterLoaded(int32 CharacterIndex) {
}

AWWEGameModeAnimViewer::AWWEGameModeAnimViewer() {
    this->DefaultCharacterClass = NULL;
    this->SelectedCategory = 0;
    this->SelectedAnim = 0;
    this->bEnabledAllAnimations = false;
}

