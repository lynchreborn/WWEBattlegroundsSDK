#include "WWEGameplayInitialSettings.h"

FWWEGameplayInitialSettings::FWWEGameplayInitialSettings() {
    this->MatchMode = ESBMatchMode::MatchMode01;
    this->AILevel = NULL;
    this->bUseCountDownOutOfRing = false;
    this->bUseCountDownEnterTheRing = false;
    this->TimeDurationSecondsCountDown = 0.00f;
    this->TimeDurationSecondsCountDownForNormalWrestler = 0.00f;
    this->bNoUnlimitedSpectatorWeapons = false;
    this->NumOfSpectatorWeapons = 0;
    this->bCanUseRingWeapons = false;
    this->bNoUnlimitedRingWeapons = false;
    this->NumberOfMaleWrestlers = 0;
    this->NumberOfFemaleWrestlers = 0;
    this->bRandomMap = false;
    this->CustomMapId = 0;
}

