#include "WWEAction_RunningThrow.h"

void UWWEAction_RunningThrow::MulticastRunningThrowHit_Implementation(AWWECharacterCombat* Instigator) {
}

void UWWEAction_RunningThrow::MulticastDailyChallenge_Implementation() {
}

UWWEAction_RunningThrow::UWWEAction_RunningThrow() {
    this->MaxDistanceRunningThrow = 300.00f;
    this->MaxAngleRunningThrow = 40.00f;
    this->FightingStylesAllowed = 3;
    this->bSuccessHit = false;
    this->bIsBackThrow = false;
    this->bToTurnbuckle = false;
}

