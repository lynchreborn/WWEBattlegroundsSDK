#include "WWEWrestlersDetailsPoolGridSlot.h"

AWWEOutfitCharacterBox* UWWEWrestlersDetailsPoolGridSlot::GetCharacterBox() {
    return NULL;
}

UWWEWrestlersDetailsPoolGridSlot::UWWEWrestlersDetailsPoolGridSlot() {
    this->bCanBuy = false;
    this->bInputHandled = true;
    this->GridPosText = NULL;
    this->CharHandleIdxText = NULL;
    this->DataIndexText = NULL;
    this->OutfitSelected = NULL;
    this->bActiveSlot = 0;
    this->StartingGridPosition = 0;
    this->Saved3DCharHandleIndex = -1;
    this->CharacterBox = NULL;
    this->OwnerWrestlerDetailsGrid = NULL;
    this->bPurchaseInProgress = false;
}

