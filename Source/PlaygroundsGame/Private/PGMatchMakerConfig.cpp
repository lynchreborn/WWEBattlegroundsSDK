#include "PGMatchMakerConfig.h"

UPGMatchMakerConfig::UPGMatchMakerConfig() {
    this->FindSessionDelay = 0.00f;
    this->FindSessionTimeout = 0;
    this->bMatchmakingEnabled = false;
    this->MatchmakingSkillIgnoredTime = 0;
    this->MatchmakingSkillInitialDistance = 0;
    this->MatchmakingSkillIncreaseRate = 0;
    this->MatchmakingZonesTimeToForceFullAreaLookup = 0;
}

