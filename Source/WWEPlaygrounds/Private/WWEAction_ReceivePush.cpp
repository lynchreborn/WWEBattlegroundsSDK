#include "WWEAction_ReceivePush.h"

UWWEAction_ReceivePush::UWWEAction_ReceivePush() {
    this->bIsLargeIrish = false;
    this->EndType = EWWEReceivePushEndType::None;
    this->ClashType = EWWEClashType::Turnbuckle;
    this->bFromIrishWhip = false;
    this->LargeIrishDistance = 20.00f;
    this->bWantToPerformTurnbuckleMinigame = false;
}

