#include "SBAnimNotify_PlayLibrarySound.h"

USBAnimNotify_PlayLibrarySound::USBAnimNotify_PlayLibrarySound() {
    this->SoundLibraryClass = NULL;
    this->VolumeMultiplier = 1.00f;
    this->PitchMultiplier = 1.00f;
    this->bFollow = true;
    this->bErrorShown = false;
}

