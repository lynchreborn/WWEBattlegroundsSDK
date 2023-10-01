#include "WWEAction_AutoMove.h"

void UWWEAction_AutoMove::MulticastStopAutoMove_Implementation(EWWEActionNodeResult Result) {
}

UWWEAction_AutoMove::UWWEAction_AutoMove() {
    this->bRunning = true;
    this->AutoMoveMode = EWWEAutoMoveMode::TargetRival;
    this->bUpdateTargetOnTick = false;
    this->bAbortByRingTriggerEnabled = true;
}

