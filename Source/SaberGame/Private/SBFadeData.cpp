#include "SBFadeData.h"

FSBFadeData::FSBFadeData() {
    this->SoundClass = ESBSoundClass::Music;
    this->FadeType = ESBSoundFadeType::FadeIn;
    this->FadeRemainingTime = 0.00f;
    this->FadeDuration = 0.00f;
    this->CurrentVolume = 0.00f;
    this->TargetVolume = 0.00f;
}

