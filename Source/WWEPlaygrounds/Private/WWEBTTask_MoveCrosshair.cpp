#include "WWEBTTask_MoveCrosshair.h"

UWWEBTTask_MoveCrosshair::UWWEBTTask_MoveCrosshair() {
    this->Threshold = 30.00f;
    this->CachedTargetActor = NULL;
    this->CachedCharacterCombat = NULL;
    this->CachedControlComponent = NULL;
}

