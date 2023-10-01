#include "WWEWrestlersShowcaseGridSlot.h"


UWWEWrestlersShowcaseGridSlot::UWWEWrestlersShowcaseGridSlot() {
    this->bCanDelete = false;
    this->bCanBuy = false;
    this->OnDeletePressedSoundCue = NULL;
    this->OnEditSkillTreePressedSoundCue = NULL;
    this->LoadingPanel = NULL;
    this->OwnerGrid = NULL;
    this->bActiveSlot = 0;
    this->StartingGridPosition = 0;
    this->Saved3DCharHandleIndex = -1;
    this->CharacterBox = NULL;
    this->CurrentOutfitIndex = 0;
    this->MyParams = NULL;
}

