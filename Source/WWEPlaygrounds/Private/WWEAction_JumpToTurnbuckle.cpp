#include "WWEAction_JumpToTurnbuckle.h"

UWWEAction_JumpToTurnbuckle::UWWEAction_JumpToTurnbuckle() {
    this->bPrepareFaceTurnbuckle = false;
    this->PrepareDistace = 0.00f;
    this->TargetTurnbuckle = EWWETurnbuckleLocation::None;
}

