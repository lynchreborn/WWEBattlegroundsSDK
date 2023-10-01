#include "WWEAnimNotify_HandToRope.h"

UWWEAnimNotify_HandToRope::UWWEAnimNotify_HandToRope() {
    this->bEnableInteractions = true;
    this->bEnableWhenCharacterIsMoving = true;
    this->BodyPart = EWWEInteractibleBodyPartsWithRope::LeftHand;
}

