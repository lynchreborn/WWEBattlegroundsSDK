#include "PGSeason.h"

FPGSeason::FPGSeason() {
    this->ID = 0;
    this->bSeasonMatchInProgress = false;
    this->difficulty = EPGMatchDifficultyConfigs::Rookie;
    this->CurrentState = EPGSeasonStates::Regular;
    this->bRewardsGiven = false;
    this->PositionCurrentTeam = 0;
    this->AttemptNum = 0;
}

