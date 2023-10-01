#include "WWEArenaEditorHeightSelection.h"

UWWEArenaEditorHeightSelection::UWWEArenaEditorHeightSelection() {
    this->TopButton = NULL;
    this->MidButton = NULL;
    this->LowButton = NULL;
    this->FocusButton = NULL;
    this->FocusIndex = 0;
    this->MaxFocusIndex = 3;
    this->MaxAnalogMovement = 5.00f;
    this->CurrentAnalogMovement = 0.00f;
    this->ArenaEditor = NULL;
}

