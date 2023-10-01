#include "PGChampionshipMatchStats.h"

FPGChampionshipMatchStats::FPGChampionshipMatchStats() {
    this->PromotionWins = 0;
    this->DemotionWins = 0;
    this->PromotionLost = 0;
    this->DemotionLost = 0;
    this->BestWinStreak = 0;
    this->BestLostStreak = 0;
    this->CurrentWinStreak = 0;
    this->CurrentLostStreak = 0;
    this->TotalPromotions = 0;
    this->TotalDemotions = 0;
    this->LotteryPicksUsed = 0;
}

