#include "WWEDailyQuestData.h"

FWWEDailyQuestData::FWWEDailyQuestData() {
    this->SlotId = 0;
    this->DailyQuestType = EWWEDailyQuestType::NONE;
    this->GameMode = EWWEDailyQuestGameMode::NONE;
    this->ValueToCheck = 0;
    this->MinimunAILevel = EPGMatchDifficultyConfigs::Rookie;
    this->ActionType = EWWEInputAction::None;
    this->bIsAcummulative = false;
    this->IsOnline = false;
    this->RewardType = EWWEDailyQuestRewardType::NONE;
    this->RewardQuantity = 0;
    this->QuestProgress = 0;
    this->bHasBeenClaimed = false;
    this->bIsNew = false;
}

