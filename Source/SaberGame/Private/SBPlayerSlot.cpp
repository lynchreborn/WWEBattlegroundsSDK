#include "SBPlayerSlot.h"

USBPlayerSlot::USBPlayerSlot() {
    this->bAssigned = false;
    this->PlayerId = 0;
    this->bLocal = true;
    this->Gamepad = -1;
    this->bAllowsCrossplay = false;
}

