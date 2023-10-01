#include "WWEAction_GrabbedApron.h"

void UWWEAction_GrabbedApron::OnTimeEnd() {
}

UWWEAction_GrabbedApron::UWWEAction_GrabbedApron() {
    this->bSuccess = false;
    this->TimeToEndGrab = 2.00f;
    this->MinigameButtonPressWidget = NULL;
    this->TotalCountMinigameNeeded = 40.00f;
}

