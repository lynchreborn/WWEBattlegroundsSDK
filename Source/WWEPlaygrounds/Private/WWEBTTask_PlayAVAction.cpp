#include "WWEBTTask_PlayAVAction.h"

UWWEBTTask_PlayAVAction::UWWEBTTask_PlayAVAction() {
    this->Action = EWWEInputAction::None;
    this->ThrowType = EWWEActionTypes::None;
    this->StartBodyPartGrabbed = EWWEGrabBodyPart::None;
    this->ActionDirection = EWWEDirection::None;
}

