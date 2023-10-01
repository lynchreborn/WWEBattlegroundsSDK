#include "WWELeaderboardKOTRRanking.h"

UWWELeaderboardKOTRRanking::UWWELeaderboardKOTRRanking() {
    this->UserSlotClass = NULL;
    this->PlayerSlotClass = NULL;
    this->ScrollSpeed = 0.00f;
    this->Top1UsernameText = NULL;
    this->Top2UsernameText = NULL;
    this->Top3UsernameText = NULL;
    this->Top1PlatformIcon = NULL;
    this->Top2PlatformIcon = NULL;
    this->Top3PlatformIcon = NULL;
    this->LeaderboardKOTRPlayerInfo = NULL;
    this->LeaderboardKOTRGrid = NULL;
    this->UpArrow = NULL;
    this->DownArrow = NULL;
    this->LeaderboardKOTRRanking_Idle = NULL;
    this->LeaderboardKOTRRanking_ArrowsIdle = NULL;
    this->bIsGridCreated = false;
}

