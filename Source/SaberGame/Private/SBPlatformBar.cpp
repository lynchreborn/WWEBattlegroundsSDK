#include "SBPlatformBar.h"

USBPlatformSlot* USBPlatformBar::GetPlatformSlotByName(const FName& SlotName) {
    return NULL;
}

USBPlatformBar::USBPlatformBar() {
    this->PlatformSlotsPanel = NULL;
    this->ControllerTypeSource = ESBControllerTypeSource::ActivePlayer;
}

