#include "WWEEnergyThiefPowerUp.h"

void UWWEEnergyThiefPowerUp::OnParticleSystemTick() {
}

void UWWEEnergyThiefPowerUp::OnParticleSystemEnd(UParticleSystemComponent* ParticleSystem) {
}

UWWEEnergyThiefPowerUp::UWWEEnergyThiefPowerUp() {
    this->TotalWavesSpawned = 0;
    this->EnergyForEachWave = 0;
    this->RadiusAffected = 0;
    this->CachedCharacter = NULL;
}

