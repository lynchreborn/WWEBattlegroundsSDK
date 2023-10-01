#include "WWEAction_ReceiveCoffinLaunch.h"

void UWWEAction_ReceiveCoffinLaunch::MulticastSetCoffinEventTarget_Implementation(AWWECoffinEvent* _CoffinEventTarget) {
}

UWWEAction_ReceiveCoffinLaunch::UWWEAction_ReceiveCoffinLaunch() {
    this->CoffinEventTarget = NULL;
    this->bLaunched = false;
    this->bIsControlledFlight = false;
    this->bWasInsideRing = false;
    this->bNeedUpdateRotation = true;
}

