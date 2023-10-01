#include "WWEAction_ExitFromCage.h"

void UWWEAction_ExitFromCage::OnTimeEnd() {
}

void UWWEAction_ExitFromCage::MulticastSetCanPause_Implementation(const bool bCanPause) {
}

UWWEAction_ExitFromCage::UWWEAction_ExitFromCage() {
    this->TimeToEndIdle = 3.00f;
    this->CurrentPosition = 0.00f;
    this->InitialPosition = 0.00f;
    this->bMinigameWon = false;
}

