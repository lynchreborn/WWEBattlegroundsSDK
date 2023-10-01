#include "WWEKingOfTheRingCountdown.h"

void UWWEKingOfTheRingCountdown::UpdateCounter() {
}

void UWWEKingOfTheRingCountdown::SetMessageVisible(bool bVisible) {
}

UWWEKingOfTheRingCountdown::UWWEKingOfTheRingCountdown() {
    this->CountdownText = NULL;
    this->CountdownInfoText = NULL;
    this->CounterHorizontalBox = NULL;
    this->InfoTextOverlay = NULL;
    this->CountdownTickAnimation = NULL;
    this->CountdownInfoAppear = NULL;
    this->CountdownInfoDisappear = NULL;
    this->bIsMessageVisible = false;
}

