#include "PGDefaultContentGameplay.h"

UPGDefaultContentGameplay::UPGDefaultContentGameplay() {
    this->SFXNoSlomoSoundClass = NULL;
    this->SFXSlomoSoundClass = NULL;
    this->bEnableAutoSlowmoPitch = true;
    this->MinPitch = 0.50f;
    this->MaxPitchShiftRate = 0.50f;
    this->MassiveIdleLoopSound = NULL;
    this->TimeUntilResults = 5.00f;
}

