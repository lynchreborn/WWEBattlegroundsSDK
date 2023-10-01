#include "PGMassiveCrowdManager.h"

APGMassiveCrowdManager::APGMassiveCrowdManager() {
    this->MaxCrowdNumber = 1000;
    this->PS4MaxCrowdNumber = 1000;
    this->XboxMaxCrowdNumber = 1000;
    this->SwitchMaxCrowdNumber = 1000;
    this->PCMaxCrowdNumber = 1000;
    this->CrowdSpawnPointTag = TEXT("CrowdSpawnPoint");
    this->GameState = NULL;
    this->CachedDefaultContentGameplay = NULL;
    this->bSpawnPointsCollected = false;
    this->bCrowdSpawned = false;
}

