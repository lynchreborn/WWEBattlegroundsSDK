#include "WWECharismaActionCheck.h"

FWWECharismaActionCheck::FWWECharismaActionCheck() {
    this->FightingStyles = 0;
    this->MatchModes = 0;
    this->bCarryNeeded = false;
    this->bHeatSpecified = false;
    this->bFullHeatNeeded = false;
    this->bSignatureNeeded = false;
    this->bWeaponNeeded = false;
    this->WeaponNeededClass = NULL;
    this->bEventNeeded = false;
    this->ArenaDatabaseId = 0;
    this->bRingStateNeeded = false;
    this->RingLowHealthRatio = 0.00f;
    this->RingStatesAccepted = 0;
    this->PowerUpTierNeeded = 0;
}

