#include "WWEAction_GrabbedTurnbuckle.h"

void UWWEAction_GrabbedTurnbuckle::OnTimeEnd() {
}

UWWEAction_GrabbedTurnbuckle::UWWEAction_GrabbedTurnbuckle() {
    this->bSuccess = false;
    this->TimeToEndGrab = 2.00f;
    this->MinigameButtonPressWidget = NULL;
    this->TotalCountMinigameNeeded = 40.00f;
}

