#include "WWEBattleGroundSelectionGrid.h"

UWWEBattleGroundSelectionGrid::UWWEBattleGroundSelectionGrid() {
    this->PressedOption = NULL;
    this->PressedIndexOption = -1;
    this->RandomRender = NULL;
    this->CurrentFocusIndex = -1;
    this->DefaultOption = 0;
    this->OwnerScreen = NULL;
}

