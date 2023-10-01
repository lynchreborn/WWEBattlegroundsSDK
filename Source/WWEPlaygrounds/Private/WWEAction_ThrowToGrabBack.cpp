#include "WWEAction_ThrowToGrabBack.h"

UWWEAction_ThrowToGrabBack::UWWEAction_ThrowToGrabBack() {
    this->BackFromReceiveGrabBackCharacter = NULL;
    this->bMustReceiveDamage = false;
    this->ExtraDistance = 100.00f;
    this->RivalAngle = 80.00f;
}

