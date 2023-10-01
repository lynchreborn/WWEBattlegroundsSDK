#include "WWEAction_ReceiveGrabExitFromCage.h"

void UWWEAction_ReceiveGrabExitFromCage::OnTimeEnd() {
}

void UWWEAction_ReceiveGrabExitFromCage::OnReceiveGrabExitFromCageEndAborted() {
}

void UWWEAction_ReceiveGrabExitFromCage::MulticastSetCanPause_Implementation(const bool bCanPause) {
}

void UWWEAction_ReceiveGrabExitFromCage::MulticastEndMinigame_Implementation(const bool bDefenderWon) {
}

UWWEAction_ReceiveGrabExitFromCage::UWWEAction_ReceiveGrabExitFromCage() {
    this->bSuccess = false;
    this->MinigameButtonPressWidget = NULL;
    this->TotalCountMinigameNeeded = 10.00f;
}

