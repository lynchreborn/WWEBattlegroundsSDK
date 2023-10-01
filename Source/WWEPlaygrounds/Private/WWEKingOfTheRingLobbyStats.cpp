#include "WWEKingOfTheRingLobbyStats.h"

void UWWEKingOfTheRingLobbyStats::ShowLeaderboardRewards() {
}

void UWWEKingOfTheRingLobbyStats::CheckUpdateChallengeBar() {
}

UWWEKingOfTheRingLobbyStats::UWWEKingOfTheRingLobbyStats() {
    this->ChallengeDescription = NULL;
    this->KickedOutProgressBar = NULL;
    this->Reward = NULL;
    this->RewardIcon = NULL;
    this->ScoreRecordValue = NULL;
    this->LastScoreValue = NULL;
    this->KickoutsRecordValue = NULL;
    this->SurvivedTimeRecordValue = NULL;
    this->ResistedKikoutsRecordValue = NULL;
    this->MatchesPlayedValue = NULL;
    this->AverageSurvivedTimeValue = NULL;
    this->AverageKickoutsValue = NULL;
    this->PreferedWrestlerPortrait = NULL;
    this->PreferedWrestlerPortraitBorder = NULL;
    this->PreferedFightStyleImage = NULL;
    this->KingOfTheRingManager = NULL;
    this->CurrentChallenge = 0;
    this->PreviousChallenge = 0;
    this->PreviousChallengeProgress = 0.00f;
    this->ChallengeProgress = 0;
    this->MaxProgressBarValue = 0;
    this->bFillBar = false;
    this->bIsUpdatingRewards = false;
    this->bOnTutorialAcceptedReceived = false;
    this->bOnRemoteDataReceived = false;
    this->LobbyScreen = NULL;
}

