#include "WWERunningThrowsAction.h"

UWWERunningThrowsAction::UWWERunningThrowsAction() {
    this->InterestDone = EWWEInterestFactor::Low;
    this->InterestReceive = EWWEInterestFactor::High;
    this->bIsBackThrow = false;
    this->bToTurnbuckle = false;
}

