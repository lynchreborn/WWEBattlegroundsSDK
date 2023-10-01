#include "PGCrowdManager.h"

APGCrowdManager::APGCrowdManager() {
    this->bCrowdVariableTickIntervalEnabled = false;
    this->GameState = NULL;
    this->CrowdMinReactionTime = 0.00f;
    this->CrowdMaxReactionTime = 0.50f;
    this->CurrentWinner = 0;
}

