#include "WWEAction_RunningHit.h"

UWWEAction_RunningHit::UWWEAction_RunningHit() {
    this->RunningHitType = EWWERunningHitType::Punch;
    this->Distance = 0.00f;
    this->bCheckDistance = false;
    this->bAdjustToRival = false;
    this->PreselectedVariation = -1;
    this->DistToRope = 0.00f;
    this->bHitSuccessful = false;
    this->MaxAngleToRotateRunningHits = 45.00f;
    this->MinDistanceFromRopesToJump = 30.00f;
    this->MaxDistanceFromRopesToJump = 250.00f;
    this->MaxDistanceGroundRunningHit = 300.00f;
    this->MaxAngleAdjustThroughRopes = 45.00f;
    this->MaxDistanceAdjustThroughRopes = 650.00f;
    this->AdjustThroughRopesTrackingRatio = 0.70f;
}

