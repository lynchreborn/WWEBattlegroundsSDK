#include "PGPlayerSlot.h"

UPGPlayerSlot::UPGPlayerSlot() {
    this->CharacterLevel = 0;
    this->CharacterParams = NULL;
    this->bAi = false;
    this->Team = ESBTeam::None;
    this->bIsGuest = false;
    this->bIsFavourite = false;
    this->bReady = false;
}

