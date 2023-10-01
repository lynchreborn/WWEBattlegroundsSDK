#include "WWEGameplayInitialSettingsEditor.h"

FWWEGameplayInitialSettingsEditor::FWWEGameplayInitialSettingsEditor() {
    this->MatchMode = ESBMatchMode::MatchMode01;
    this->AILevel = NULL;
    this->bUseCountDownOutOfRing = false;
    this->bUseCountDownEnterTheRing = false;
    this->SecondsOutOfRingCountDown = 0;
    this->SecondsEnterTheRingCountDownForNormalWrestler = 0;
    this->TimeDurationSecondsCountDown = 0.00f;
    this->TimeDurationSecondsCountDownForNormalWrestler = 0.00f;
    this->bCanPerformPinActionInsideRing = false;
    this->bCanPerformPinActionOutsideRing = false;
    this->bCanUseSpectatorWeapons = false;
    this->bNoUnlimitedSpectatorWeapons = false;
    this->NumOfSpectatorWeapons = 0;
    this->bCanUseRingWeapons = false;
    this->bNoUnlimitedRingWeapons = false;
    this->NumOfRingWeapons = 0;
    this->bCanInteractWithObjects = false;
    this->bCanDestroyRing = false;
    this->bElectrifiedWalls = false;
    this->bCanUsePowerUps = false;
    this->MoneyLimit = 0;
    this->NumberOfMaleWrestlers = 0;
    this->NumberOfFemaleWrestlers = 0;
    this->bRandomMap = false;
}

