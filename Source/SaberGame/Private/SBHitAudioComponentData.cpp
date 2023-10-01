#include "SBHitAudioComponentData.h"

USBHitAudioComponentData::USBHitAudioComponentData() {
    this->bRootComponent = true;
    this->bFollow = false;
    this->VolumeMultiplier = 1.00f;
    this->PitchMultiplier = 1.00f;
    this->bLibraryMode = false;
    this->DefaultSound = NULL;
    this->MinNormalImpulse = 15000.00f;
    this->MinVelocity = 30.00f;
    this->MinSecondsBetweenSounds = 0.10f;
    this->MinVolumeOnZeroForce = 0.00f;
    this->MaxVolumeOnMaxForce = 1.00f;
    this->bCalcVolumeWithVelocity = false;
    this->ThresholdImpulseForMaxVolume = 100000.00f;
    this->ThresholdVelocityForMaxVolume = 300.00f;
}

