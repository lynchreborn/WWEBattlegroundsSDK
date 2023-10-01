#include "WWEHUDFameObjective.h"

void UWWEHUDFameObjective::OnHideAnimation() {
}


void UWWEHUDFameObjective::BP_CheckNextMessage() {
}

UWWEHUDFameObjective::UWWEHUDFameObjective() {
    this->TitleText = NULL;
    this->DescriptionText = NULL;
    this->RewardSlot = NULL;
    this->TitlePanel = NULL;
    this->DescriptionPanel = NULL;
    this->InAnimationSound = NULL;
    this->OutAnimationSound = NULL;
}

