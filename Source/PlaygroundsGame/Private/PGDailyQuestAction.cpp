#include "PGDailyQuestAction.h"

FPGDailyQuestAction::FPGDailyQuestAction() {
    this->ConditionalOperatorTypeId = EPGDailyQuestConditionalOperator::Unknown;
    this->Value = 0;
    this->CurrentProgress = 0;
}

