#include "SBBaseAttachableFX.h"

FSBBaseAttachableFX::FSBBaseAttachableFX() {
    this->Attached = false;
    this->bLockLocation = false;
    this->bLockRotation = false;
    this->bLockScale = false;
    this->bUseFloorImpactNormal = false;
}

