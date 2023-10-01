#include "PGAmbientSound.h"
#include "Components/AudioComponent.h"

APGAmbientSound::APGAmbientSound() {
    this->FadeInDuration = 2.00f;
    this->CachedAudioComponent = CreateDefaultSubobject<UAudioComponent>(TEXT("AudioComponent0"));
}

