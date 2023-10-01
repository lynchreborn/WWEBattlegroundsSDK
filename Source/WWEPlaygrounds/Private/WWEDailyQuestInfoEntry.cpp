#include "WWEDailyQuestInfoEntry.h"

void UWWEDailyQuestInfoEntry::OnRerollConfirmed(ESBMessageBoxClosingReason Reason) {
}



void UWWEDailyQuestInfoEntry::BP_OnRerollSwapData() {
}

void UWWEDailyQuestInfoEntry::BP_OnRerollAnimationFinished() {
}

void UWWEDailyQuestInfoEntry::BP_OnCashInAnimationFinished() {
}

UWWEDailyQuestInfoEntry::UWWEDailyQuestInfoEntry() {
    this->DescriptionText = NULL;
    this->HardRewardText = NULL;
    this->SoftRewardText = NULL;
    this->ExpRewardText = NULL;
    this->HardHorizontalBox = NULL;
    this->SoftHorizontalBox = NULL;
    this->ExpHorizontalBox = NULL;
    this->ProgressText = NULL;
    this->ProgressCompletedText = NULL;
    this->Selected = NULL;
    this->Unselected = NULL;
    this->CashedInTick = NULL;
    this->CashedInTickImage = NULL;
    this->MyScreen = NULL;
    this->Temp_NewDailyQuest = NULL;
    this->DescriptionStyle = NULL;
    this->DescriptionCompletedStyle = NULL;
    this->RegularUnselectedTexture = NULL;
    this->CompletedUnselectedTexture = NULL;
    this->State = EWWEDailyQuestInfoEntryState::NONE;
    this->EntryNumber = 0;
    this->OnNavigatedSoundCue = NULL;
    this->OnRerollSoundCue = NULL;
    this->OnPressedRerollSoundCue = NULL;
}

