#include "WWEArenaEditorSubSectionGrid.h"

UWWEArenaEditorSubSectionGrid::UWWEArenaEditorSubSectionGrid() {
    this->Section1Button = NULL;
    this->Section2Button = NULL;
    this->FocusButton = NULL;
    this->FocusIndex = 0;
    this->MaxFocusIndex = 2;
    this->MaxAnalogMovement = 5.00f;
    this->CurrentAnalogMovement = 0.00f;
    this->ArenaEditor = NULL;
}

