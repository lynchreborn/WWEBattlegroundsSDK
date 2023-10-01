#include "WWEReceiveGroundHitAction.h"

UWWEReceiveGroundHitAction::UWWEReceiveGroundHitAction() {
    this->BodyPartHarmed = EWWEBodyPart::None;
    this->bIsFaceUp = false;
    this->bHard = false;
    this->bHitWhileStandUp = false;
    this->InterestReceive = EWWEInterestFactor::Mid;
    this->DirectionTakingIntoAccountSeenFromAbove = EWWEDirection::None;
}

