#include "WWEPinAction.h"

UWWEPinAction::UWWEPinAction() {
    this->DirectionTakingIntoAccountCharacterDumped = EWWEDirection::None;
    this->bIsFaceUp = true;
    this->bWithPowerUp = false;
    this->InterestDone = EWWEInterestFactor::High;
}

