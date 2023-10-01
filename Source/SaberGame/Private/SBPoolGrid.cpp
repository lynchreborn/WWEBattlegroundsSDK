#include "SBPoolGrid.h"

USBPoolGrid::USBPoolGrid() {
    this->bConstructInEditor = false;
    this->bClearGrid = false;
    this->bPrecomputeConfiguration = false;
    this->bIsMultiSlot = false;
    this->SlotClass = NULL;
    this->Direction = ESBPoolGridDirection::Horizontal;
    this->bLoop = false;
    this->ElementDataCount = 0;
    this->ScrollLerpSpeed = 0.00f;
    this->ScrollAnimCurve = NULL;
    this->ScrollSound = NULL;
    this->GridRoot = NULL;
    this->ScrollPanel = NULL;
    this->Scroller = NULL;
    this->bScrolling = false;
    this->CurrentScrollLerpValue = 0.00f;
}

