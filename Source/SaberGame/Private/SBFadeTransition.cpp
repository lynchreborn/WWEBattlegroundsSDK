#include "SBFadeTransition.h"

void USBFadeTransition::OpenPhase() {
}

void USBFadeTransition::OnFadeOutFinished() {
}

void USBFadeTransition::OnFadeInFinished() {
}

void USBFadeTransition::FadeOutPhase() {
}

void USBFadeTransition::FadeInPhase() {
}

USBFadeTransition::USBFadeTransition() {
    this->FadeSpeed = 0.00f;
    this->FadeWidget = NULL;
    this->FadeImage = NULL;
    this->Widget = NULL;
    this->FromScene = NULL;
    this->ToScene = NULL;
    this->bIsFadingIn = false;
    this->bIsFadingOut = false;
    this->targetFadeValue = 0.00f;
    this->fromFadeValue = 0.00f;
    this->FadeLerpValue = 0.00f;
}

