#include "WWETutorialStep.h"

FWWETutorialStep::FWWETutorialStep() {
    this->ActionToComplete = NULL;
    this->ExtraCheckToComplete = EWWETutorialStepCompleteExtraCheck::None;
    this->CheckToStartStep = EWWETutorialCheck::None;
    this->bStopTime = false;
    this->StopTimeBlendInTime = 0.00f;
}

