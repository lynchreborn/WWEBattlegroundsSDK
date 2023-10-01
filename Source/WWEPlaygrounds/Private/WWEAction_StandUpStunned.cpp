#include "WWEAction_StandUpStunned.h"

UWWEAction_StandUpStunned::UWWEAction_StandUpStunned() {
    this->MaxDistance = 200.00f;
    this->Distance = 0.00f;
    this->CurrentDirection = EWWEDirection::None;
    this->ScaleGrabType = EWWEGrabTypes::Same;
    this->bHitResolved = false;
    this->AngleToConsiderGrabRival = 120.00f;
    this->CachedTargetRival = NULL;
    this->bWasCountered = false;
    this->bCurrentBackLeft = false;
}

