#include "WWEHUDActionsTooltipSlot.h"

void UWWEHUDActionsTooltipSlot::UpdateVisualsFromStoredCharismaData() {
}

UWWEHUDActionsTooltipSlot::UWWEHUDActionsTooltipSlot() {
    this->ZoomOutRate = 2.00f;
    this->SlotBackground = NULL;
    this->ActionButton = NULL;
    this->TooltipBox = NULL;
    this->ActionName = NULL;
    this->CharismaEarnIndicator = NULL;
    this->SwapSlotsAnim = NULL;
    this->LowTimeAnim = NULL;
    this->ZoomSlotAnim = NULL;
    this->ChangeBackgroundGreenAnim = NULL;
    this->ChangeBackgroundRedAnim = NULL;
}

