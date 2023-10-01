#include "WWEGameplayBackendInitialSettings.h"

FWWEGameplayBackendInitialSettings::FWWEGameplayBackendInitialSettings() {
    this->SecondsOutOfRingCountDown = 0;
    this->SecondsEnterTheRingCountDownForNormalWrestler = 0;
    this->bCanPerformPinActionInsideRing = false;
    this->bCanPerformPinActionOutsideRing = false;
    this->NumOfRingWeapons = 0;
    this->bCanUseSpectatorWeapons = false;
    this->bCanInteractWithObjects = false;
    this->bCanDestroyRing = false;
    this->bElectrifiedWalls = false;
    this->bCanUsePowerUps = false;
    this->MoneyLimit = 0;
}

