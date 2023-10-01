#include "WWEPrestigeSlot.h"

void UWWEPrestigeSlot::SetTextPosition(EWWEDirections Direction) {
}

void UWWEPrestigeSlot::SetPrestigeNumber(int32 PrestigeNumber) {
}

UWWEPrestigeSlot::UWWEPrestigeSlot() {
    this->CurrentTextPosition = EWWEDirections::LEFT;
    this->TextStyle = NULL;
    this->TextOnCorner = false;
    this->BeltScale = 0.00f;
    this->SlotType = EWWEPrestigeSlotType::JustBelt;
    this->PrestigeCanvas = NULL;
    this->PrestigeIcon = NULL;
    this->SlotBorder = NULL;
    this->SlotBackground = NULL;
    this->PrestigeGridPanel = NULL;
    this->PrestigeInfo = NULL;
    this->PrestigeInfoCorner = NULL;
}

