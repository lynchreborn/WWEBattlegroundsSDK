#include "WWEDailyQuestScreen.h"

void UWWEDailyQuestScreen::RecoverFocus() {
}

void UWWEDailyQuestScreen::OnTutorialPopupClosed(ESBPopupSceneClosingReason Reason) {
}

void UWWEDailyQuestScreen::OnScreenTransitionEnds() {
}

void UWWEDailyQuestScreen::CashIn_CashInIteration() {
}

UWWEDailyQuestScreen::UWWEDailyQuestScreen() {
    this->Slot1 = NULL;
    this->Slot2 = NULL;
    this->Slot3 = NULL;
    this->InfoText = NULL;
    this->ProgressBar = NULL;
    this->RightPlatformBar = NULL;
    this->LeftPlatformBar = NULL;
    this->State = EWWEDailyQuestScreenState::Online;
    this->bCanCashInQuests = false;
    this->Temp_QuestToCashIndex = 0;
    this->Temp_QuestRewardToCashIndex = 0;
    this->Temp_BarRewardToCashIndex = 0;
    this->Temp_OriginalExpCount = 0.00f;
    this->Temp_OriginalSoftCurrencyCount = 0.00f;
    this->Temp_OriginalHardCurrencyCount = 0.00f;
    this->Temp_QuestToRerollIndex = 0;
}

