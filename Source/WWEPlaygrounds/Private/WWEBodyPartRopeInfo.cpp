#include "WWEBodyPartRopeInfo.h"

FWWEBodyPartRopeInfo::FWWEBodyPartRopeInfo() {
    this->Rope = EWWERingRope::All;
    this->bGoToInitialRopePosition = false;
    this->bUpdateRopeEnabled = false;
    this->TimeToFollowIK = 0.00f;
    this->CurrentTimeToFollowIK = 0.00f;
    this->bIgnoreXAxis = false;
    this->bIgnoreYAxis = false;
    this->bIgnoreZAxis = false;
    this->bSocketMode = false;
    this->GrabIndex = 0;
    this->GrabThreshold = 0.00f;
    this->bTryingGrabRope = false;
    this->GlueIndex = 0;
    this->RopeFloor = EWWERingRopesFloor::All;
    this->bSearchFromCharacterRoot = false;
    this->bPhysicsDrivenAnimationEnabled = false;
}

