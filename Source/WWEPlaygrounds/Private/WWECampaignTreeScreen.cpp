#include "WWECampaignTreeScreen.h"

void UWWECampaignTreeScreen::ShowRewardPopup(UWWECampaignNodeParameters* NodeParams) {
}

void UWWECampaignTreeScreen::OnWrestlerMessageBoxClosed(ESBMessageBoxClosingReason Cause) {
}

void UWWECampaignTreeScreen::OnTutorialPopupClosed(ESBPopupSceneClosingReason Reason) {
}

void UWWECampaignTreeScreen::OnScreenTransitionEnds() {
}

void UWWECampaignTreeScreen::OnRewardMessageBoxClosed(ESBMessageBoxClosingReason Cause) {
}

void UWWECampaignTreeScreen::OnKeyEventMessageBoxClosed(ESBMessageBoxClosingReason Cause) {
}

void UWWECampaignTreeScreen::OnCurrentSelectedNodeStateChanged(EWWECampaignNodeStatus NewStatus) {
}

void UWWECampaignTreeScreen::CompleteCurrentNodeDelayed() {
}

UWWECampaignTreeScreen::UWWECampaignTreeScreen() {
    this->MenuBackground = NULL;
    this->CampaignTree = NULL;
    this->ZoomScaleBox = NULL;
    this->MaxZoom = 1.00f;
    this->MinZoom = 0.20f;
    this->ZoomSpeed = 5.00f;
    this->RightPlatformBar = NULL;
    this->CenterPlatformBar = NULL;
    this->LeftPlatformBar = NULL;
    this->ProgressCounter = NULL;
}

