#include "WWEMenuBackground.h"

void UWWEMenuBackground::UpdateCampaignBackground() {
}

UWWEMenuBackground::UWWEMenuBackground() {
    this->CurrentBackground = NULL;
    this->ToGoBackground = NULL;
    this->TransitionSpeed = 5.00f;
    this->DefaultZoneId = -1;
    this->DefaultMusicId = 0;
    this->DefaultPlayTime = 0.00f;
}

