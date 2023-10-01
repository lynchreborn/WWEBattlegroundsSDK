#include "WWEAction_Counteract.h"

UWWEAction_Counteract::UWWEAction_Counteract() {
    this->bWantParryForGrab = false;
    this->RivalDirection = EWWEDirection::None;
    this->bCantReceiveCounteract = false;
}

