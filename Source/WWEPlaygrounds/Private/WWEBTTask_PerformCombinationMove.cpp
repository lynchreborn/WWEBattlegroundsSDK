#include "WWEBTTask_PerformCombinationMove.h"

void UWWEBTTask_PerformCombinationMove::OnActionEnd(EWWEActionNodeResult Result) {
}

UWWEBTTask_PerformCombinationMove::UWWEBTTask_PerformCombinationMove() {
    this->ForceCombination = EWWECombinationList::None;
    this->CurrentNodeResult = EBTNodeResult::InProgress;
    this->ComboType = ECombinationType::ComboPunch;
}

