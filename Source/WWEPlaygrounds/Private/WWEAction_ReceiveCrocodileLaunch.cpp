#include "WWEAction_ReceiveCrocodileLaunch.h"

void UWWEAction_ReceiveCrocodileLaunch::MulticastSetCrocodileEventTarget_Implementation(AWWECrocodilesEvent* _CrocodileEventTarget) {
}

UWWEAction_ReceiveCrocodileLaunch::UWWEAction_ReceiveCrocodileLaunch() {
    this->CrocodileEventTarget = NULL;
    this->bLaunched = false;
    this->bIsControlledFlight = false;
    this->bWasInsideRing = false;
    this->bNeedUpdateRotation = true;
}

