#include "WWECampaignNodeWidget.h"

void UWWECampaignNodeWidget::RestoreFocus() {
}

void UWWECampaignNodeWidget::OnPurchasePopup(ESBPopupSceneClosingReason Cause) {
}

UWWECampaignNodeWidget::UWWECampaignNodeWidget() {
    this->UnselectedFrame = NULL;
    this->SelectedFrame = NULL;
    this->NodeIcon = NULL;
    this->EventModeIcon = NULL;
    this->NodeText = NULL;
    this->CurrencyLock = NULL;
    this->PreviousNode = NULL;
    this->OnSelectedSound = NULL;
    this->OnPressedSound = NULL;
    this->OnFailSound = NULL;
    this->Star1Off = NULL;
    this->Star1On = NULL;
    this->Star2Off = NULL;
    this->Star2On = NULL;
    this->Star3Off = NULL;
    this->Star3On = NULL;
    this->TickIcon = NULL;
    this->NodeSelectedAnim = NULL;
    this->CampaignTreeContent = NULL;
    this->CampaignNode = NULL;
}

