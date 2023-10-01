#include "WWERewardsScreenSequential.h"

void UWWERewardsScreenSequential::WaitAndPlayRewardAnim() {
}

void UWWERewardsScreenSequential::ShowNextReward() {
}

void UWWERewardsScreenSequential::SetReward(FWWEProgressionReward Reward) {
}

void UWWERewardsScreenSequential::SetNextPhase(bool bShowNextReward) {
}

void UWWERewardsScreenSequential::SetInputBlockFlag(bool bSkipInputBlocked) {
}

void UWWERewardsScreenSequential::SetContextText(FText Text) {
}

void UWWERewardsScreenSequential::PopWidget() {
}

void UWWERewardsScreenSequential::PlayRewardAnim() {
}

UWWERewardsScreenSequential::UWWERewardsScreenSequential() {
    this->NumericRewardList = NULL;
    this->RewardImage = NULL;
    this->CrownImage = NULL;
    this->CrownImageBack = NULL;
    this->Subtitle1Panel = NULL;
    this->Subtitle1Text = NULL;
    this->Subtitle2Panel = NULL;
    this->Subtitle2Text = NULL;
    this->SkillOverlay = NULL;
    this->PlatformBarOverlay = NULL;
    this->SkillText = NULL;
    this->SkillStatusText = NULL;
    this->SkillFrameImage = NULL;
    this->UpgradeSkillPlusOne = NULL;
    this->ShowReward = NULL;
    this->HideReward = NULL;
    this->ShowWidget = NULL;
    this->HideWidget = NULL;
    this->WaitTimeInReward = 0.00f;
    this->WaitTimeUntilNextReward = 0.00f;
    this->bIsDebugReward = false;
    this->PopTransitionIn = TEXT("PageOut");
    this->RewardSound = NULL;
}

