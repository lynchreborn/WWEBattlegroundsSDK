#include "WWERewardsList.h"

void UWWERewardsList::AddRewards(bool bIsVertical, const FWWEProgressionReward& Reward, bool bOnlyNumeric, bool bUseFrame) {
}

void UWWERewardsList::AddReward(bool bIsVertical) {
}

UWWERewardsList::UWWERewardsList() {
    this->VerticalElementsSeparation = 0.00f;
    this->HorizontalElementsSeparation = 0.00f;
    this->MaxElementsPerSection = 0;
    this->SlotClass = NULL;
    this->SlotsAligment = HAlign_Fill;
    this->RewardsTextStyle = NULL;
    this->bShowPlusSymbol = true;
    this->bAddSpaceBeforeIcon = false;
    this->HorizontalList = NULL;
    this->VerticalList = NULL;
}

