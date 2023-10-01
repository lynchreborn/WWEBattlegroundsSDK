#include "WWECrowdMoodAmbientSound.h"

void AWWECrowdMoodAmbientSound::UpdateSoundCueParam(bool bBlockMood) {
}

AWWECrowdMoodAmbientSound::AWWECrowdMoodAmbientSound() {
    this->DurationTimeInSeconds = 2.00f;
    this->IncrementedDurationTimeInSeconds = 0.50f;
    this->TotalWavesInSoundCrowdMood = 0;
    this->SoundWaveIndex = 0;
    this->CurrentSoundCueParam = 0.00f;
    this->CurrentTimeTick = 0.00f;
    this->BackupSoundWaveIndex = 0;
    this->bIncrementingMood = false;
}

