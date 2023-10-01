#include "WWETournamentRewardPopUp.h"

void UWWETournamentRewardPopUp::SetDesiredFocus() {
}

void UWWETournamentRewardPopUp::RemoveScene(ESBPopupSceneClosingReason ClosingReason) {
}

UWWETournamentRewardPopUp::UWWETournamentRewardPopUp() {
    this->RewardsList = NULL;
    this->ReachedNewCheckpointOverlay = NULL;
    this->EnterAnim = NULL;
    this->IdleAnim = NULL;
    this->ExitAnim = NULL;
    this->TournamentPopUpType = EWWETournamentPopUpType::Won;
    this->bExitting = false;
}

