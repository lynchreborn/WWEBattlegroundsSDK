#include "WWEGroundHitAction.h"

UWWEGroundHitAction::UWWEGroundHitAction() {
    this->DominantBodyPart = EWWEBodyPart::None;
    this->WeaponType = EWWETypeObjects::None;
    this->InterestDone = EWWEInterestFactor::Mid;
    this->InterestReceive = EWWEInterestFactor::Low;
    this->DirectionFromAbove = EWWEDirection::None;
    this->bDumpedBySpecialKick = false;
}

