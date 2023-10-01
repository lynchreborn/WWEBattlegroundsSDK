#include "WWERunningHitAction.h"

UWWERunningHitAction::UWWERunningHitAction() {
    this->Type = EWWERunningHitType::Punch;
    this->InterestDone = EWWEInterestFactor::High;
    this->InterestReceive = EWWEInterestFactor::Low;
}

