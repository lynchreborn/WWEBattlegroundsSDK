#include "WWECampaignTreeWidget.h"

UWWECampaignTreeWidget::UWWECampaignTreeWidget() {
    this->TreeScreen = NULL;
    this->CampaignTreeContent = NULL;
    this->CampaignTreeContentSizeBox = NULL;
    this->CurrentNodeWidget = NULL;
    this->bIsRoadToGlory = false;
    this->ContentTreeToSpawn = NULL;
    this->HorizontalScrollBox = NULL;
    this->VerticalScrollBox = NULL;
    this->InitialHorizontalOffset = 960.00f;
    this->InitialVerticalOffset = 540.00f;
    this->LerpSpeed = 0.00f;
    this->ScrollModeJump = false;
    this->ScrollAnimCurve = NULL;
    this->lerpValue = 0.00f;
    this->scrolling = false;
    this->originalHorizontalOffset = 0.00f;
    this->originalVerticalOffset = 0.00f;
    this->targetHorizontalOffset = 0.00f;
    this->targetVerticalOffset = 0.00f;
}

