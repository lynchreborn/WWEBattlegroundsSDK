#include "PGSeasonManager.h"

UPGSeasonManager::UPGSeasonManager() {
    this->SeasonIdInProgress = 0;
    this->TempSeasonId = 0;
    this->TempDifficulty = EPGMatchDifficultyConfigs::Rookie;
}

