#include "WWEBTTask_PlayAction.h"

void UWWEBTTask_PlayAction::OnActionEnd(EWWEActionNodeResult Result) {
}

UWWEBTTask_PlayAction::UWWEBTTask_PlayAction() {
    this->CurrentNodeResult = EBTNodeResult::InProgress;
    this->Action = EWWEInputAction::None;
    this->ActionDirection = EWWEDirection::None;
    this->bInstantAction = false;
    this->bReadDirectionFromBB = false;
}

