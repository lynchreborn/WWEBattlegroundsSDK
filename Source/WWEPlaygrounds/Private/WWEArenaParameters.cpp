#include "WWEArenaParameters.h"

TArray<EItemBloodline> UWWEArenaParameters::GetBloodlines() const {
    return TArray<EItemBloodline>();
}

UWWEArenaParameters::UWWEArenaParameters() {
    this->bUnlockedAtStart = false;
    this->bOverrideCustomArenaConfig = false;
}

