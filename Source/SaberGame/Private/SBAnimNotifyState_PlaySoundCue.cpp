#include "SBAnimNotifyState_PlaySoundCue.h"

USBAnimNotifyState_PlaySoundCue::USBAnimNotifyState_PlaySoundCue() {
    this->InitialSound = NULL;
    this->InitialVolumeMultiplier = 1.00f;
    this->InitialPitchMultiplier = 1.00f;
    this->EndSound = NULL;
    this->EndVolumeMultiplier = 1.00f;
    this->EndPitchMultiplier = 1.00f;
    this->FadeOut = 0.20f;
    this->FadeVolumeLevel = 0.00f;
    this->BoneName = TEXT("c_main_M_pelvis_Export");
    this->bFollow = true;
    this->AnimSound = NULL;
}

