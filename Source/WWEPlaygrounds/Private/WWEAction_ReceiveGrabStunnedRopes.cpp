#include "WWEAction_ReceiveGrabStunnedRopes.h"

void UWWEAction_ReceiveGrabStunnedRopes::OnTimeEnd() {
}

UWWEAction_ReceiveGrabStunnedRopes::UWWEAction_ReceiveGrabStunnedRopes() {
    this->bSuccess = false;
    this->TimeToEndGrab = 2.00f;
    this->MinigameButtonPressWidget = NULL;
    this->TotalCountMinigameNeeded = 40.00f;
}

