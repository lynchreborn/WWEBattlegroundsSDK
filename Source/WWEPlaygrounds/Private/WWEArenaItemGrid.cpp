#include "WWEArenaItemGrid.h"

UWWEArenaItemGrid::UWWEArenaItemGrid() {
    this->bIsFirstSlotSelected = false;
    this->AlternateCurrencyAnimationTime = 0.00f;
    this->AlternateCurrencyAnimationTimeMax = 0.00f;
    this->SlotSelected = NULL;
    this->SlotFocused = NULL;
    this->UpArrow = NULL;
    this->DownArrow = NULL;
    this->ArenaEditor = NULL;
    this->ArenaSection = EWWEArenaSectionType::NONE;
}

