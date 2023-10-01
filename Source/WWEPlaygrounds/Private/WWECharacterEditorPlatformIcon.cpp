#include "WWECharacterEditorPlatformIcon.h"

UWWECharacterEditorPlatformIcon::UWWECharacterEditorPlatformIcon() {
    this->IconState = EWWEIconState::NONE;
    this->bShouldIdle = false;
    this->IdleAnimationSpeed = 0.00f;
    this->IdleAnimationSpeedMaxInitialDelay = 0.00f;
    this->IdleAnimation = NULL;
    this->bCanBePressed = false;
    this->PressedAnimationSpeed = 0.00f;
    this->PressedAnimation = NULL;
}

