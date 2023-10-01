#include "WWEAngryRamAnimInstance.h"

void UWWEAngryRamAnimInstance::MontageEnded(UAnimMontage* Montage, bool bInterrupted) {
}

UWWEAngryRamAnimInstance::UWWEAngryRamAnimInstance() {
    this->bIsWalking = false;
    this->bIsRunning = false;
    this->bStartAttack = false;
    this->CacheMontageCharge = NULL;
    this->CacheMontageIdle = NULL;
    this->CacheMontageRotate = NULL;
    this->CacheMontageStun = NULL;
    this->CacheMontageJumpRingIn = NULL;
    this->CacheMontageJumpRingOut = NULL;
}

