#include "WWEIrishWhipAction.h"

UWWEIrishWhipAction::UWWEIrishWhipAction() {
    this->DirectionToPush = EWWEDirection::None;
    this->InterestDone = EWWEInterestFactor::Low;
    this->InterestReceive = EWWEInterestFactor::High;
    this->bWasCountered = false;
}

