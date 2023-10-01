#include "PGPlayerStart.h"

APGPlayerStart::APGPlayerStart() : APlayerStart(FObjectInitializer::Get()) {
    this->bInitialSpawn = true;
    this->TeamOwner = ESBTeam::None;
}

