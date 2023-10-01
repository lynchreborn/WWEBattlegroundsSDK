#include "WWEAction_ReceivePowerUpIceBreath.h"

void UWWEAction_ReceivePowerUpIceBreath::UpdateRumbleFrozen() {
}

void UWWEAction_ReceivePowerUpIceBreath::ResetFrozenCharacterState() {
}

UWWEAction_ReceivePowerUpIceBreath::UWWEAction_ReceivePowerUpIceBreath() {
    this->CountReceiveHits = 0;
    this->MaxRumbleTime = 0.30f;
    this->RumbleMovement = 0.20f;
    this->MaxRumbleCount = 1000;
    this->CurrentRumbleCount = 0;
    this->LastCharacterState = EWWECharacterState::None;
    this->bFacingToRing = false;
    this->bOnTurnbuckle = false;
}

