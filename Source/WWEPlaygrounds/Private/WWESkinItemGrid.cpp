#include "WWESkinItemGrid.h"

UWWESkinItemGrid::UWWESkinItemGrid() {
    this->LeftArrow = NULL;
    this->RightArrow = NULL;
    this->CachedSkinParameters = NULL;
    this->bCanBeSelected = false;
    this->SelectedAnimationSpeed = 0.00f;
    this->SelectedAnimation = NULL;
    this->bIsSelected = false;
}

