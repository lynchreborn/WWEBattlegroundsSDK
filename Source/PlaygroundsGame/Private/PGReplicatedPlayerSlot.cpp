#include "PGReplicatedPlayerSlot.h"

FPGReplicatedPlayerSlot::FPGReplicatedPlayerSlot() {
    this->bAssigned = false;
    this->bAi = false;
    this->PlayerId = 0;
    this->CharacterTeam = ESBTeam::Team01;
    this->bIsGuest = false;
    this->bIsFavourite = false;
    this->bReady = false;
}

