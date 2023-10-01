#include "SBHUD.h"

void ASBHUD::ShowDebugForActorByName(const FString& ActorName) {
}

void ASBHUD::ShowDebugCycleDisplay() {
}

ASBHUD::ASBHUD() {
    this->DebugDisplayCycleCategories.AddDefaulted(1);
    this->CurrentDebugDisplayMode = 0;
    this->ShowDebugTargetActorByName = NULL;
    this->bShowSafeZone = false;
}

