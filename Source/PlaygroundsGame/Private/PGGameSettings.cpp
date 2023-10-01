#include "PGGameSettings.h"

void UPGGameSettings::SetPartyPlayMatchInitialSettings() {
}

UPGGameSettings::UPGGameSettings() {
    this->bForceArenaMap = false;
    this->bAlternativeTeams = false;
    this->bReverseTeams = false;
    this->bDisableAI = false;
    this->bBanAiCreation = false;
    this->RemainingTime = 0;
    this->GameDifficulty = EPGMatchDifficultyConfigs::Rookie;
}

