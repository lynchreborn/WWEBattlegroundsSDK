#include "WWEFacialAnimInstance.h"

void UWWEFacialAnimInstance::EndFacialAnimation() {
}

UWWEFacialAnimInstance::UWWEFacialAnimInstance() {
    this->OwningCharacter = NULL;
    this->EntranceAnimSequence = NULL;
    this->FacialAnimationType = EWWEFacialType::None;
    this->FacialAnimationAlpha = 0.00f;
    this->FacialAnimationBlendTime = 0.00f;
    this->FacialAnimationAlphaTarget = 0.00f;
    this->bInEntrance = false;
    this->bInMenu = false;
    this->bInLobby = false;
}

