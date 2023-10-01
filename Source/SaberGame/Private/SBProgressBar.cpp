#include "SBProgressBar.h"


void USBProgressBar::SkipFillAnimation() {
}

void USBProgressBar::SetPercentageWithSpeed(const float NewPercent) {
}

void USBProgressBar::SetPercentage(const float NewPercent, const float FillAnimationDesiredDurationInSeconds) {
}

ESBProgressBarState USBProgressBar::GetProgressBarState() const {
    return ESBProgressBarState::Empty;
}

USBProgressBar::USBProgressBar() {
    this->FillingSpeed = 0.00f;
    this->FillAnimationCurve = NULL;
    this->ProgressBarWidget = NULL;
    this->BorderImageWidget = NULL;
    this->TargetPercent = 0.00f;
    this->CurrentProgressBarState = ESBProgressBarState::Empty;
    this->bPlayEndSoundOnFillFinished = true;
    this->FillingSound = NULL;
    this->EndFillingSound = NULL;
    this->FillingAudio = NULL;
}

