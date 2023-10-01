#include "WWEBTTask_MoveOnApron.h"

UWWEBTTask_MoveOnApron::UWWEBTTask_MoveOnApron() {
    this->Threshold = 30.00f;
    this->CachedTargetActor = NULL;
    this->CachedCharacterCombat = NULL;
    this->CachedControlComponent = NULL;
}

