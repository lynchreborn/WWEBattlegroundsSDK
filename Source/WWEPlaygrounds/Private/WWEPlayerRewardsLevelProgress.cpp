#include "WWEPlayerRewardsLevelProgress.h"

void UWWEPlayerRewardsLevelProgress::SetProgressFromUserCustomXP(float Experience) {
}

void UWWEPlayerRewardsLevelProgress::SetProgressFromUser() {
}

UWWEWrestlersDetailsLevel* UWWEPlayerRewardsLevelProgress::GetLevelProgressBar() {
    return NULL;
}

UWWEPlayerRewardsLevelProgress::UWWEPlayerRewardsLevelProgress() {
    this->UserLevelProgressBar = NULL;
    this->CurrentUserLevel = NULL;
    this->NextUserLevel = NULL;
}

