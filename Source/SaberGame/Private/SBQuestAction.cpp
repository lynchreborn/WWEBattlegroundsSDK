#include "SBQuestAction.h"

FSBQuestAction::FSBQuestAction() {
    this->ConditionalOperatorTypeId = ESBQuestConditionalOperator::Unknown;
    this->Value = 0;
    this->CurrentProgress = 0;
}

