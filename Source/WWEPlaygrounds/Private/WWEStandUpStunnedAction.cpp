#include "WWEStandUpStunnedAction.h"

UWWEStandUpStunnedAction::UWWEStandUpStunnedAction() {
    this->bIsFaceUp = false;
    this->DirectionTakingIntoAccountRivalSeenFromAbove = EWWEDirection::None;
    this->GrabType = EWWEGrabTypes::Same;
    this->bOnlyReceive = false;
    this->bBackLeft = false;
}

