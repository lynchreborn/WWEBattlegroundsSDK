#include "WWEAction_ReceiveClimbMinigame.h"

void UWWEAction_ReceiveClimbMinigame::OnTimeEnd() {
}

void UWWEAction_ReceiveClimbMinigame::MulticastEndMinigame_Implementation(const bool bDefenderWon) {
}

UWWEAction_ReceiveClimbMinigame::UWWEAction_ReceiveClimbMinigame() {
    this->bSuccess = false;
    this->MinigameButtonPressWidget = NULL;
    this->TotalCountMinigameNeeded = 10.00f;
}

