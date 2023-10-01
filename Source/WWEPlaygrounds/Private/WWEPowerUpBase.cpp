#include "WWEPowerUpBase.h"

UWWEPowerUpBase::UWWEPowerUpBase() {
    this->TierGroup = NULL;
    this->AffectedBarStats = 1;
    this->LevelPowerUp = EWWEPowerUpLevels::Bronze;
    this->CustomBehaviour = EWWEPowerUpWithCustomBehaviour::NONE;
    this->PowerUpParameters = NULL;
    this->PowerUpType = EWWEPowerUpType::None;
    this->FxSoundFadeOut = 0.00f;
    this->FxSoundVolumeFadeOut = 0.00f;
    this->bLowModeParticles = false;
    this->bCanApplyFresnel = false;
    this->HowManyTimesHasReceivedHitsWhileActiveThisPowerUp = 0;
    this->HowManyTimesHasHitsWhileActiveThisPowerUp = 0;
}

