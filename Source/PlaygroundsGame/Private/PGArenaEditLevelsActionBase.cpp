#include "PGArenaEditLevelsActionBase.h"

void UPGArenaEditLevelsActionBase::OnAsyncLevelsLoadingCompleted() {
}

void UPGArenaEditLevelsActionBase::OnAsyncLevelsLoadingCancelled() {
}

UPGArenaEditLevelsActionBase::UPGArenaEditLevelsActionBase() {
    this->PendingCancelledLevels = 0;
    this->PendingLoadingLevels = 0;
}

