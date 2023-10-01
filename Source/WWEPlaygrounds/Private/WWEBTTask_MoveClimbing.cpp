#include "WWEBTTask_MoveClimbing.h"

UWWEBTTask_MoveClimbing::UWWEBTTask_MoveClimbing() {
    this->Threshold = 30.00f;
    this->bJustClimbUp = false;
    this->CachedTargetActor = NULL;
    this->CachedCharacterCombat = NULL;
}

