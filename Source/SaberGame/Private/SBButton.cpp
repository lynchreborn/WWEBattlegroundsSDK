#include "SBButton.h"





USBButton::USBButton() {
    this->bActive = true;
    this->bCanBeSelected = true;
    this->SelectedAnimationSpeed = 1.00f;
    this->UnselectedAnimationSpeed = 0.00f;
    this->SelectedAnimation = NULL;
    this->UnselectedAnimation = NULL;
    this->bCanBePressed = true;
    this->bThrowPressAfterAnimation = false;
    this->PressedAnimationSpeed = 1.00f;
    this->PressedAnimation = NULL;
    this->bShouldIdle = true;
    this->bPlayIdleOnlyWhenSelected = false;
    this->IdleAnimationSpeed = 1.00f;
    this->IdleAnimationSpeedMaxInitialDelay = 0.00f;
    this->IdleAnimation = NULL;
    this->FocusThreshold = 0.25f;
    this->bFocusDelayedExecuted = false;
    this->PressesDuringFocusDelay = 0;
    this->FocusAccumulationTime = 0.00f;
    this->MySBButtonState = ESBButtonState::NONE;
    this->bIsSelected = false;
    this->bIsPressing = false;
    this->OnPressedSoundCue = NULL;
    this->OnFailPressedSoundCue = NULL;
    this->Temp_IgnoreAnimationEvents = false;
}

