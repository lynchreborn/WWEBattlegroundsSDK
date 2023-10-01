#include "WWELeaderboardKOTRMenu.h"

void UWWELeaderboardKOTRMenu::TimeoutMsgClosed(ESBMessageBoxClosingReason Cause) {
}

void UWWELeaderboardKOTRMenu::RefreshingErrorMsgClosed(ESBMessageBoxClosingReason Cause) {
}

void UWWELeaderboardKOTRMenu::RecoverFocus(ESBMessageBoxClosingReason Cause) {
}

UWWELeaderboardKOTRMenu::UWWELeaderboardKOTRMenu() {
    this->LeaderboardKOTRRanking = NULL;
    this->LeaderboardKOTRTimer = NULL;
    this->LeaderboardKOTRRewardsGold = NULL;
    this->LeaderboardKOTRRewardsSilver = NULL;
    this->LeaderboardKOTRRewardsBronze = NULL;
    this->RightButtons = NULL;
    this->LeaderboardTittle = NULL;
    this->LoadGridQuantity = 0;
    this->bStopUpdateLeaderboard = false;
    this->LeaderboardEndDate = 0;
    this->MyRankButton = NULL;
    this->SwitchLeaderboardButton = NULL;
    this->MyCurrentRank = 0;
    this->bTimeEnded = false;
    this->bCountdownEnabled = false;
}

