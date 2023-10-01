#include "WWELocalData.h"

FWWELocalData::FWWELocalData() {
    this->CurrentFreeSlot = 0;
    this->PacksBought = 0;
    this->SignaturesDone = 0;
    this->TauntsDone = 0;
    this->RamUsed = false;
    this->CrocodileUsed = false;
    this->MotorbikePickedUp = false;
    this->TurnbuclePickedUp = false;
    this->SelectedEditableArenaId = 0;
    this->difficulty = EPGMatchDifficultyConfigs::Rookie;
    this->CustomMapId = 0;
    this->bRandomMap = false;
    this->MaxScoreKOTR = 0;
    this->NumMatchesKOTR = 0;
    this->NumKOTRKickOuts = 0;
    this->bIsCrossplayKingOfTheRingShowedFirstTime = false;
    this->bIsCrossplayTournamentShowedFirstTime = false;
}

