#include "WWEAction_Springboard.h"

UWWEAction_Springboard::UWWEAction_Springboard() {
    this->MaxAngleToRotateRunningHits = 45.00f;
    this->MaxDistanceToRopesInSpringboard = 250.00f;
    this->MaxAngleToTargetRivalInSpringboard = 140.00f;
    this->MaxDistanceToTargetRivalInSpringboard = 450.00f;
    this->Distance = 0.00f;
    this->bCanBeCountered = false;
    this->bHitSuccess = false;
    this->bStartedAjust = false;
}

