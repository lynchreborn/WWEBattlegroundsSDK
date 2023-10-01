#include "WWERopeInteractionSetRopeParams.h"

FWWERopeInteractionSetRopeParams::FWWERopeInteractionSetRopeParams() {
    this->SetRopeTime = 0.00f;
    this->TargetRopesFloor = EWWERingRopesFloor::All;
    this->bSearchFromCharacterRoot = false;
    this->TimeToFollowIK = 0.00f;
    this->bGoToInitialRopePosition = false;
    this->bRopeUpdateEnabled = false;
    this->MaxDeviation = 0.00f;
    this->bIgnoreXAxis = false;
    this->bIgnoreYAxis = false;
    this->bIgnoreZAxis = false;
    this->bSocketMode = false;
}

