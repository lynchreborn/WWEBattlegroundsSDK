#include "WWEWrestlersMainGridSlot.h"


UWWEWrestlersMainGridSlot::UWWEWrestlersMainGridSlot() {
    this->bCanDelete = false;
    this->bCanBuy = false;
    this->bInputHandled = true;
    this->OnDeletePressedSoundCue = NULL;
    this->OnEditSkillTreePressedSoundCue = NULL;
    this->OwnerGrid = NULL;
    this->bActiveSlot = 0;
    this->StartingGridPosition = 0;
    this->Saved3DCharHandleIndex = -1;
    this->CharacterBox = NULL;
    this->MyParams = NULL;
    this->CurrentOutfitIndex = 0;
    this->bPurchaseInProgress = false;
}

