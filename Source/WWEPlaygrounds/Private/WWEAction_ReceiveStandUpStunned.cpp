#include "WWEAction_ReceiveStandUpStunned.h"

void UWWEAction_ReceiveStandUpStunned::PrepareCounter() {
}

void UWWEAction_ReceiveStandUpStunned::EndReceiveStandUpStunnedByTime() {
}

UWWEAction_ReceiveStandUpStunned::UWWEAction_ReceiveStandUpStunned() {
    this->DefaultSpecialStunTime = 7.00f;
    this->ForcedSpecialStunTime = 0.00f;
    this->HPPercentageToApplyStun = 0.50f;
    this->StunTimeWithHigherHP = 0.50f;
}

