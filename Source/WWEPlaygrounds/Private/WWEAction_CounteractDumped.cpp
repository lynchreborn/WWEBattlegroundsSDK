#include "WWEAction_CounteractDumped.h"

void UWWEAction_CounteractDumped::ResetBlockActionByTime() {
}

UWWEAction_CounteractDumped::UWWEAction_CounteractDumped() {
    this->bBlockActionByTime = false;
    this->RingDirection = EWWEDirection::None;
    this->bIsFaceUp = false;
    this->TimeToBlockAction = 1.00f;
    this->MaxDistanceToRival = 150.00f;
}

