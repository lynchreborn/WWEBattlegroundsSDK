#include "WWEFadeableAmbientSound.h"

AWWEFadeableAmbientSound::AWWEFadeableAmbientSound() {
    this->bPlayOnBegin = false;
    this->bShouldOverrideGlobalFadeInTime = false;
    this->OverridenFadeInTime = 0.00f;
    this->bShouldOverrideGlobalFadeOutTime = false;
    this->OverridenFadeOutTime = 0.00f;
}

