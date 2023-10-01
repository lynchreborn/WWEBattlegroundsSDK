#include "WWEHUDChallengeMessage.h"


void UWWEHUDChallengeMessage::BP_CheckNextMessage() {
}

UWWEHUDChallengeMessage::UWWEHUDChallengeMessage() {
    this->NameLeft = NULL;
    this->NameRight = NULL;
    this->DescriptionLeft = NULL;
    this->DescriptionRight = NULL;
    this->IconLeft = NULL;
    this->IconRight = NULL;
    this->DailyIconLeft = NULL;
    this->DailyIconRight = NULL;
    this->bIsDailyQuest = false;
}

