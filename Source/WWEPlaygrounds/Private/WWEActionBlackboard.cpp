#include "WWEActionBlackboard.h"

UWWEActionBlackboard::UWWEActionBlackboard() {
    this->bIsCounterHit = false;
    this->bDumpedFromChargeHit = false;
    this->bLastIrishWhipWasHeavy = false;
    this->bDumpedAfterAllRounderRunningKick = false;
    this->bDumpedAfterAllRounderSpecialTopRopes = false;
    this->bStandUpStunnedAfterHighFlyerSpecial = false;
    this->bDumpedBySpecialMove = false;
    this->bCanDoCounter = false;
    this->CurrentInterruptionStep = EWWEAnimInterruptionStep::None;
    this->bLastGrabWasAFail = false;
}

