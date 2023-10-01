#include "WWEBTTask_FindTurnbuckle.h"

UWWEBTTask_FindTurnbuckle::UWWEBTTask_FindTurnbuckle() {
    this->Turnbuckle = EWWETurnbuckleLocation::None;
    this->AvoidTooNear = false;
    this->AvoidDistance = 0.00f;
    this->bCheckTopRopesMaxRange = false;
    this->bCheckForTopRopesThrowRange = false;
    this->ExtraSafetyDistanceForCheck = 50.00f;
}

