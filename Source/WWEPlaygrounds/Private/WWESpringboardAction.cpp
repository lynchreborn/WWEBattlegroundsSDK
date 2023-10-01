#include "WWESpringboardAction.h"

UWWESpringboardAction::UWWESpringboardAction() {
    this->bIsRivalDumped = false;
    this->bCanBeCountered = false;
    this->bToOutsideOfTheRing = false;
    this->bFromApron = false;
    this->InterestDone = EWWEInterestFactor::High;
    this->InterestReceive = EWWEInterestFactor::Low;
    this->bRotateRivalToSameDirection = false;
}

