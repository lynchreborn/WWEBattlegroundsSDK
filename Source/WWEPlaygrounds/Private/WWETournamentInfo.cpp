#include "WWETournamentInfo.h"

FWWETournamentInfo::FWWETournamentInfo() {
    this->MatchMode = ESBMatchMode::MatchMode01;
    this->NumberOfRounds = 0;
    this->FirstRoundNotCompleted = 0;
    this->TimesCompleted = 0;
    this->NumberOfRetries = 0;
    this->LastRoundRewardClaimed = 0;
    this->State = EWWETournamentPlayerState::Pending;
    this->bImageOnline = false;
    this->OnlineTexture = NULL;
}

