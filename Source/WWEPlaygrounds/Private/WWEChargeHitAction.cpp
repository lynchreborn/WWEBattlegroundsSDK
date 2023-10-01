#include "WWEChargeHitAction.h"

UWWEChargeHitAction::UWWEChargeHitAction() {
    this->bIsRivalDumped = false;
    this->FastAttack = NULL;
    this->InterestDone = EWWEInterestFactor::High;
    this->InterestReceive = EWWEInterestFactor::Low;
}

