#include "WWEAction_ReceiveGroundHit.h"

UWWEAction_ReceiveGroundHit::UWWEAction_ReceiveGroundHit() {
    this->BodyPart = EWWEBodyPart::None;
    this->bHardHit = false;
    this->DirectionTakingIntoAccountSeenFromAbove = EWWEDirection::None;
}

