#include "WWECombatResultsPlayerRewards.h"

void UWWECombatResultsPlayerRewards::WaitAndGoNextState(float WaitTime) {
}

void UWWECombatResultsPlayerRewards::UserLeveledUpWait(int32 PreviousUserLevel, int32 NewUserLevel) {
}

void UWWECombatResultsPlayerRewards::UserLeveledUp(int32 PreviousUserLevel, int32 NewUserLevel, FWWEProgressionReward UnlockedReward) {
}

void UWWECombatResultsPlayerRewards::SetState(EWWEPlayerRewardsState NextState) {
}

void UWWECombatResultsPlayerRewards::ResetProgressBar() {
}

void UWWECombatResultsPlayerRewards::GoNextState() {
}

void UWWECombatResultsPlayerRewards::FinishedRewards() {
}

void UWWECombatResultsPlayerRewards::ClearTimerHandles() {
}

UWWECombatResultsPlayerRewards::UWWECombatResultsPlayerRewards() {
    this->bDebugUserXPToConsume = false;
    this->DebugUserXPToConsume = 0;
    this->PlayerRewardsPointsCommonClass = NULL;
    this->PlayerRewardsPointsKOTRClass = NULL;
    this->username = NULL;
    this->RightPlatformBar = NULL;
    this->RewardPointsCanvas = NULL;
    this->RewardsCanvas = NULL;
    this->ButtonsCanvas = NULL;
    this->EndButtons = NULL;
    this->LevelProgress = NULL;
    this->LevelUp = NULL;
    this->HideScreenAnim = NULL;
    this->ShowScreenAnim = NULL;
    this->TimeToNextState[0] = 0.00f;
    this->TimeToNextState[1] = 0.00f;
    this->TimeToNextState[2] = 0.00f;
    this->TimeUntilLevelUp = 0.00f;
    this->GameInstance = NULL;
    this->ContentUI = NULL;
    this->CurrentLoopingSound = NULL;
    this->AnimationPlayer = NULL;
}

