#include "WWEGrabAction.h"

UWWEGrabAction::UWWEGrabAction() {
    this->BodyPartToGrab = EWWEGrabBodyPart::None;
    this->bIsFake = false;
    this->GrabType = EWWEGrabTypes::Same;
    this->bFlipIKEffectorSockets = false;
    this->bOnApron = false;
}

