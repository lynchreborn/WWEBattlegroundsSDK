#include "WWEGridArrow.h"

void UWWEGridArrow::InitAnimations() {
}

UWWEGridArrow::UWWEGridArrow() {
    this->bIsActive = false;
    this->Selected = NULL;
    this->Unselected = NULL;
    this->OnScrollAnimation = NULL;
    this->OnScrollAnimationSpeed = 0.00f;
    this->IdlelAnimation = NULL;
    this->IdleAnimationSpeed = 0.00f;
}

